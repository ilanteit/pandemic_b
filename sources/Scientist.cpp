#include "Scientist.hpp"
#include "Player.hpp"

namespace pandemic{

    Scientist::Scientist(Board& b ,City city , int n):Player(b,city), num(n){
        
    }

   

    Scientist& Scientist::discover_cure(Color color){

         if(board.is_cured(color))
         {
             return *this;
         }
        if(board.contain_research_station(get_city())){
            
              
                if(count_correct_cards(color)>=num){
                    erase_cards(color,num);
                    board.set_cure(color); 

                }else{
                    throw("Invalid move,Player doesnt have enough cards of the same color as the disease");
                }
              
        }else{
            throw("invalid move,City doesnt have research station");
        }
        return *this;
    }
     

     
    string Scientist::role(){
        return "Scientist";
    } 

    

}
