
#pragma once
#include <stdio.h>
#include "Player.hpp"

namespace pandemic
{
    class Medic : public Player
    {

    public:
        Medic(Board &b, City city);
        Medic &treat(City city);
        Medic &drive(City city);
        Medic &fly_direct(City city);
        Medic &fly_charter(City city);
        Medic &fly_shuttle(City city);
        void heal(City city);
        std::string role();
    };

}