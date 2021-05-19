#pragma once 
#include <stdio.h>
#include "Player.hpp"

namespace pandemic{
    class Scientist:public Player{

        public:
            
            Scientist(Board& b,City city,int n); 
            Scientist& discover_cure(Color color);
            std::string role();

        private:
            int num;

    };



}