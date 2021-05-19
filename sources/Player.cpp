
#include "Player.hpp"

using namespace std;
using pandemic::Board;


namespace pandemic{

    

    Player::Player(Board& b ,City c):board(b),city(c){}


    // drive to c if c is neighbor of current city 
    Player& Player::drive(City city ){
      if(get_city()!=city && board.is_nighbor(get_city(),city)){
        set_city(city);
      }else{
          throw invalid_argument("Invalid move,Player cannot drive to a non neighbor city");
      }
        return *this;
    }

    Player& Player::fly_direct(City city){
        if(cards_in_hand.find(city)!=cards_in_hand.end() && get_city()!=city){
            cards_in_hand.erase(city);
            set_city(city);
        }else{
            throw("Invalid move,Player doesnt have the card");
        }
        return *this;
    }

    Player& Player::fly_charter(City city){
        if(cards_in_hand.find(get_city())!=cards_in_hand.end() && get_city()!=city){
            cards_in_hand.erase(get_city());
            set_city(city);
        }else{
            throw("Invalid move,Player doesnt have the card");
        }
        return *this;
    }

    Player& Player::fly_shuttle(City city){
       if(board.contain_research_station(get_city()) && get_city()!=city){
           if(board.contain_research_station(city)){
               set_city(city);
            }else{
                throw("Invalid move,Player cant fly to a city with no research stationt");
            }
        }else{
            throw("Invalid move,Player can use fly_shuttle only in city with research station");
        }
        return *this;
    }

    Player& Player::build(){
        if(!board.contain_research_station(get_city())){
            if( cards_in_hand.find( get_city() )!=cards_in_hand.end()){
                board.set_research(get_city());
                cards_in_hand.erase(get_city());
            }else{
                 throw("you dont have the needed card for build"); 
            }

        }
        return *this;
    }

    int Player::count_correct_cards(Color color){
        int count_cardes=0;
        for (const auto& card: cards_in_hand){
            Color curr_color=board.get_color(card);
            if(curr_color==color){
            count_cardes++;
            }
        }
        return count_cardes;   
    }

    void Player::erase_cards(Color color,int num_cards){
        int erased=0;
        
        for(auto card=cards_in_hand.begin();card!=cards_in_hand.end();){
            if(board.get_color(*card)==color){
                cards_in_hand.erase(card++);
                erased++;
                if(erased==num_cards){
                    return;
                }
            }else{
                ++card;
            }
        }

    }
    

    Player& Player::discover_cure(Color color){

       if(board.is_cured(color))
       {
           return *this;
       }
        if(board.contain_research_station(get_city())){
                if(count_correct_cards(color)>=FIVE){
                    erase_cards(color,FIVE);
                    board.set_cure(color); 

                }else{
                    throw("Invalid move,Player doesnt have enough cards of the same color as the disease");
                }
               
        }else{
            throw("Invalid move,City doesnt have research station");
        }
        return *this;
    }
    

    Player& Player::treat(City c){
       
        if(c==get_city()){
            if(board[city]==0){
                throw ("Invalid move,Disease level is already 0");
            }
            
                if(board.is_cured(board.get_color(city))){
                    board[city]=0;
                }
                else{
                board[city]=board[city]-1;
                }
           
        }else{
            throw("Invalid move,Can only use treat on the city you are in");
        }
        return *this;
    }
    
    Player& Player::take_card(City city){
        this->cards_in_hand.insert(city);
        return *this;
    }

    Player& Player::remove_cards(){
        this->cards_in_hand.clear();
        return *this;

     } 
}