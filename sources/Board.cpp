#include "Board.hpp"

using namespace std;

namespace pandemic{

    Board::Board(){
        
        read_city_file();
       
    }
 
    void Board::read_city_file(){
        ifstream file{"cities_map.txt"};

        string line;
        string city;
        string nighbor_city;
        string color;

        
        while(getline(file,line)){
            istringstream iss(line);

            iss>>city;
            
            disease_lvl[string_to_city.at(city)]=0;
            research_station[string_to_city.at(city)]=false;

            iss>>color;
            
            card[string_to_city.at(city)]=color_str.at(color);
    
            while(iss >> nighbor_city){
                
                neighbors[string_to_city.at(city)].push_back(string_to_city.at(nighbor_city));

            }
        }

    }

    int& Board::operator[](City city) {  
           
        return disease_lvl[city];
        
    }  
    

    bool Board::is_clean(){
        for (auto const& city : disease_lvl){
             if (city.second != 0)
            {
                return false;
            }
        }
        return true;   
    }

    void Board::remove_cures(){
       for (auto& color:cured_colors){
           color.second=false;
       }   
    }

    void Board::remove_stations(){
        research_station.clear();
    }

   

    bool Board::is_nighbor(City city1,City city2){
       return(find(neighbors[city1].begin(),neighbors[city1].end(), city2) !=neighbors[city1].end());
    
    }
    
    bool Board::contain_research_station(City city){
       return research_station[city];  
    }

    
    void Board::set_research(City city){
        research_station[city]=true;
    }
    
    Color Board::get_color(const City city){ 
         return this->card[city];
    }

    bool Board::is_cured(Color color){
        return cured_colors[color];
    }
    void Board::set_cure(Color color){
        this->cured_colors[color]=true;
    }
     ostream& operator<<(std::ostream& out, Board b){
        out<<"level of disease"<<endl;
       for (auto const& city :b.disease_lvl){
           out<<city_to_string(city.first)<<"["<<city.second<<"]"<<endl;

       }
        out<<"Cures that has been discovered:"<<endl;
        out<<"red"<<"="<<b.cured_colors[Color::Red];
        out<<"blue"<<"="<<b.cured_colors[Color::Blue]<<endl;
        out<<"yellow"<<"="<<b.cured_colors[Color::Yellow]<<endl;
        out<<"black"<<"="<<b.cured_colors[Color::Black]<<endl;

        out<<"The citys which have a research stations are:"<<endl;
        for (auto const& city : b.research_station ){
           out<<city_to_string(city.first)<<" , ";

        }
        out<<endl;
        return out;
    }
   
           

}    
    

