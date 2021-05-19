
#include "OperationsExpert.hpp"
namespace pandemic{


    OperationsExpert::OperationsExpert(Board& b ,City city):Player(b,city){
    
    }

    OperationsExpert& OperationsExpert::build(){
        if(! board.contain_research_station(get_city())){
            board.set_research(get_city());
        }
        return *this;
    }

    string OperationsExpert::role(){
        return "OperationsExpert";
    }

} 