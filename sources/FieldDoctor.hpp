#pragma once 
#include <stdio.h>
#include "Player.hpp"

namespace pandemic{
    class FieldDoctor:public Player{
        public:
            FieldDoctor(Board& b,City city);
            FieldDoctor& treat(City city);
            std::string role();

    };



}