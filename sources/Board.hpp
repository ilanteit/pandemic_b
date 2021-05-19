#pragma once
#include <stdio.h>
#include <unordered_map>
#include <vector>
#include <string>
#include <array>
#include <sstream>
#include <algorithm>
#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
#include "Color.hpp"
#include "City.hpp"

namespace pandemic{
    class Board{
        private:
            map<City,int>disease_lvl;//map that shows diseases level in each city
            map<City,std::vector<City>> neighbors;//map that connects each city to set of citys
            map<City,Color>card;//map that shows color of each city
            
           
            map<City,bool>research_station;//map that shows if there is or isnt a research station in the city
           
            map<Color,bool>cured_colors={ { Color::Blue,false}, { Color::Black ,false}, {Color::Red ,false}, {Color::Yellow,false } //map that shows if a cure was discorved or not  
             };


        public:
            Board();
            void read_city_file();
            bool is_clean();
            int& operator[](City city);
            friend std::ostream& operator << (std::ostream& out ,const Board b);
            void remove_cures();
            void remove_stations();

            bool is_nighbor(City city1,City city2);
            bool contain_research_station(City city);
            void set_research(City city);//setter
            Color get_color(const City city);
            bool is_cured(Color color);
            void set_cure(Color color);//setter
            
           
        

        

        

    };
}

