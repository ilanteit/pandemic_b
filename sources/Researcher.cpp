#include "Researcher.hpp"

namespace pandemic{

     Researcher::Researcher(Board& b ,City city):Player(b,city){
         
        
    }

    Researcher& Researcher::discover_cure(Color color){
     
        if(board.is_cured(color)){
            return *this;
        }
            
            if(count_correct_cards(color)>=FIVE){
                erase_cards(color,FIVE);
                board.set_cure(color); 

            }else{
                throw("Invalid move,Player doesnt have enough cards of the same color as the disease");
            }   
       
        return *this;
        
    }

    string Researcher::role(){
        return "Researcher";
    }
}