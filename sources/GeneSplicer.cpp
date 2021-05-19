#include "GeneSplicer.hpp"


namespace pandemic{

    GeneSplicer::GeneSplicer(Board& b ,City city):Player(b,city){}

    GeneSplicer& GeneSplicer::discover_cure(Color color){
        if(board.is_cured(color)){
            return *this;
        }
          
        if(!board.contain_research_station(get_city())){
            throw("Invalid move,City doesnt have research station");
        } 
        int cards_erased=0;
        if(cards_in_hand.size()>=FIVE){
            for(auto it=cards_in_hand.begin();it!=cards_in_hand.end();){
                cards_in_hand.erase(it++);
                cards_erased++;
                if(cards_erased==FIVE){
                    break;
                }
            }
            board.set_cure(color); 

        }else{
            throw("Invalid move,Player doesnt have enough cards of the same color as the disease");
        }
                  
        return *this;
    }

    string GeneSplicer::role(){
        return "GeneSplicer";
    }

}