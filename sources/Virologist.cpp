#include "Virologist.hpp"

namespace pandemic{

    Virologist::Virologist(Board& b ,City city):Player(b,city){}

    
    Virologist& Virologist::treat(City city){
       
        if(cards_in_hand.find(city)!=cards_in_hand.end()){
            if(board[city]==0){
                throw ("Invalid move,Disease level is already 0");
            }
            
            if(board.is_cured(board.get_color(city))){
                board[city]=0;
            }
            else{
            board[city]-=1;
            }
        
        }else{
            Player::treat(city);
        }
        return *this;


    }

    string Virologist::role(){
        return "Virologist";
    } 
}