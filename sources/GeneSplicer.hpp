#pragma once 
#include <stdio.h>
#include "Player.hpp"


namespace pandemic{
    class GeneSplicer:public Player{
        public:
            GeneSplicer(Board& b,City city);
            GeneSplicer& discover_cure(Color color);
            void erase_cardes1(int num_cardes);
            std::string role();
    };



}