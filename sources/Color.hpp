#pragma once 
#include <map>
#include <string>
using namespace std;

    enum Color{Red ,Black ,Yellow , Blue};

    static map<string, Color> color_str{
        {"Blue", Color::Blue}, {"Black", Color::Black}, {"Red", Color::Red}, { "Yellow", Color::Yellow }
    }; 
    






