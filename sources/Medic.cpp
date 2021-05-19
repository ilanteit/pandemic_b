#include "Medic.hpp"

namespace pandemic{

     Medic::Medic(Board& b ,City city):Player(b,city){
        
    }

     



    Medic& Medic::drive(City city ){
       Player::drive(city);
        heal(city);
        return *this;

    }

    Medic& Medic::fly_direct(City city){
        Player::fly_direct(city);
        heal(city);
        return *this;
    }

    Medic& Medic::fly_charter(City city){
       Player::fly_charter(city);
        heal(city);
        return *this;
    }

    Medic& Medic::fly_shuttle(City c){
        Player::fly_shuttle(c);
        heal(city);
        return *this;

    }
    Medic& Medic::treat(City city){
        if(city==get_city()){
            if(board[city]==0){
                throw ("Invalid move,Disease level is already 0");
            }
            board[city]=0;
        }else{
             throw("Invalid move,Can only use treat on the city you are in");
        }
        return *this;
    }

    void Medic::heal(City city){
       if(board.is_cured(board.get_color(city))){
            board[city]=0;
        } 
    }

    

     string Medic::role(){
        return "Medic";
    }
}