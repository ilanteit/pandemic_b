#include "FieldDoctor.hpp"

namespace pandemic{

    FieldDoctor::FieldDoctor(Board& b ,City city):Player(b,city){
        
        
    }
    FieldDoctor& FieldDoctor::treat(City city){
       
        if( city==get_city()|| board.is_nighbor(city,get_city()) ){
            if(!(board[city]==0)){
                if(board.is_cured(board.get_color(city))){
                    board[city]=0;
                }
                else
                {
                board[city]-=1;}
            }else{
                throw ("Invalid move,Disease level is already 0");
            }
        }else{
            throw("Invalid move,Player cannot treat non neighbor city");
        }
        return *this;
    }

    string FieldDoctor::role(){
        return "FieldDoctor";
    }
    
}