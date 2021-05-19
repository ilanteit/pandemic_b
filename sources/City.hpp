# pragma once 
#include <string>
#include <map>
using namespace std;


enum City{
    Algiers,
    Atlanta,
    Baghdad,
    Bangkok,
    Beijing,
    Bogota,
    BuenosAires,
    Cairo,
    Chennai,
    Chicago,
    Delhi,
    Essen,
    HoChiMinhCity,
    HongKong,
    Istanbul,
    Jakarta,
    Johannesburg,
    Karachi,
    Khartoum,
    Kinshasa,
    Kolkata,
    Lagos,
    Lima,
    London,
    LosAngeles,
    Madrid,
    Manila,
    MexicoCity,
    Miami,
    Milan,
    Montreal,
    Moscow,
    Mumbai,
    NewYork,
    Osaka,
    Paris,
    Riyadh,
    SanFrancisco,
    Santiago,
    SaoPaulo,
    Seoul,
    Shanghai,
    StPetersburg,
    Sydney,
    Taipei,
    Tehran,
    Tokyo,
    Washington
};

static map<string, City> string_to_city{ {"Algiers", City::Algiers}, {"Atlanta", City::Atlanta},
    {"Baghdad", City::Baghdad}, {"Bangkok", City::Bangkok},
    {"Beijing", City::Beijing}, {"Beijing", City::Beijing},
    {"Bogota", City::Bogota}, {"BuenosAires", City::BuenosAires},
    {"Cairo", City::Cairo}, {"Chennai", City::Chennai},
    {"Chicago", City::Chicago}, {"Delhi", City::Delhi},
    {"Essen", City::Essen}, {"HoChiMinhCity", City::HoChiMinhCity},
    {"HongKong", City::HongKong}, {"Istanbul", City::Istanbul},
    {"Jakarta", City::Jakarta}, {"Johannesburg", City::Johannesburg},
    {"Karachi", City::Karachi}, {"Khartoum", City::Khartoum},
    {"Kinshasa", City::Kinshasa}, {"Kolkata", City::Kolkata},
    {"Lagos", City::Lagos}, {"Lima", City::Lima}, {"London", City::London},
    {"LosAngeles", City::LosAngeles}, {"Madrid", City::Madrid},
    {"Manila", City::Manila}, {"MexicoCity", City::MexicoCity},
    {"Miami", City::Miami}, {"Milan", City::Milan}, {"Montreal", City::Montreal},
    {"Moscow", City::Moscow}, {"Mumbai", City::Mumbai}, {"NewYork", City::NewYork},
    {"Osaka", City::Osaka}, {"Paris", City::Paris}, {"Riyadh", City::Riyadh},
    {"SanFrancisco", City::SanFrancisco}, {"Santiago", City::Santiago},
    {"SaoPaulo", City::SaoPaulo}, {"Seoul", City::Seoul}, {"Shanghai", City::Shanghai},
    {"StPetersburg", City::StPetersburg}, {"Sydney", City::Sydney}, {"Taipei", City::Taipei},
    {"Tehran", City::Tehran}, {"Tokyo", City::Tokyo}, {"Washington", City::Washington}
};

    inline std::string city_to_string(City city) {

    switch (city){
        case Algiers: return "Algiers"; break;
        case Atlanta: return "Atlanta"; break;
        case Baghdad: return "Baghdad"; break;
        case Bangkok: return "Bangkok"; break;
        case Beijing: return "Beijing"; break;
        case Bogota: return "Bogota"; break;
        case BuenosAires: return "BuenosAires"; break;
        case Cairo: return "Cairo"; break;
        case Chennai: return "Chennai"; break;
        case Chicago: return "Chicago"; break;
        case Delhi: return "Delhi"; break;
        case Essen: return "Essen"; break;
        case HoChiMinhCity: return "HoChiMinhCity"; break;
        case HongKong: return "HongKong"; break;
        case Istanbul: return "Istanbul"; break;
        case Jakarta: return "Jakarta"; break;
        case Johannesburg: return "Johannesburg"; break;
        case Karachi: return "Karachi"; break;
        case Khartoum: return "Khartoum"; break;
        case Kinshasa: return "Kinshasa"; break;
        case Kolkata: return "Kolkata"; break;
        case Lagos: return "Lagos"; break;
        case Lima: return "Lima"; break;
        case London: return "London"; break;
        case LosAngeles: return "LosAngeles"; break;
        case Madrid: return "Madrid"; break;
        case Manila: return "Manila"; break;
        case MexicoCity: return "MexicoCity"; break;
        case Miami: return "Miami"; break;
        case Milan: return "Milan"; break;
        case Montreal: return "Montreal"; break;
        case Moscow: return "Moscow"; break;
        case Mumbai: return "Mumbai"; break;
        case NewYork: return "NewYork"; break;
        case Osaka: return "Osaka"; break;
        case Paris: return "Paris"; break;
        case Riyadh: return "Riyadh"; break;
        case SanFrancisco: return "SanFrancisco"; break;
        case Santiago: return "Santiago"; break;
        case SaoPaulo: return "SaoPaulo"; break;
        case Seoul: return "Seoul"; break;
        case Shanghai: return "Shanghai"; break;
        case StPetersburg: return "StPetersburg"; break;
        case Sydney: return "Sydney"; break;
        case Taipei: return "Taipei"; break;
        case Tehran: return "Tehran"; break;
        case Tokyo: return "Tokyo"; break;
        case Washington: return "Washington"; break;
    }
}








