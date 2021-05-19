#pragma once
#include <stdio.h>
#include "Color.hpp"
#include "City.hpp"
#include "Board.hpp"
#include <iostream>

#include <bits/stdc++.h>
#define FIVE 5

using pandemic::Board;

namespace pandemic
{
    class Player
    {
    protected:
        Board &board;
        City city;
        set<City> cards_in_hand;//shows a player with set of cards
        int count_correct_cards(Color color);//returns how many cards of the same color the player has
        void erase_cards(Color color, int num_cards);//erases the amount of cards depending on their color

    public:
        Player(Board &b, City city);
        virtual std::string role() = 0;
        virtual Player &drive(City city);
        virtual Player &fly_direct(City city);
        virtual Player &fly_charter(City city);
        virtual Player &fly_shuttle(City city);
        virtual Player &build();
        virtual Player &discover_cure(Color color);
        virtual Player &treat(City city);
        Player &take_card(City city);
        Player &remove_cards();

        
        

        
        City get_city()
        {
            return this->city;
        }
        void set_city(City c)
        {
            this->city = c;
        }
    };
}
