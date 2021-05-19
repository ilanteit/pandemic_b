#include "Dispatcher.hpp"

namespace pandemic{
   
    Dispatcher::Dispatcher(Board& b ,City city):Player(b,city){ }
    
    Dispatcher& Dispatcher::fly_direct(City city){
        if(get_city()==city){
            throw ("Invalid move,Cannot fly to same location");
        }
        if(board.contain_research_station(get_city())){
            set_city(city);

        }else{
            Player::fly_direct(city);
        }
        return *this;
    }

    string Dispatcher::role(){
        return "Dispatcher";
    }


}