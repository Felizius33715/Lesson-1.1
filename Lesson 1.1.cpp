#include <iostream>

enum seasons 
{   
    €нварь = 1,
    февраль,
    март,
    арпель,
    май,
    июнь,
    июль,
    август,
    сент€брь,
    окт€брь,
    но€брь,
    декабрь
};

std::string seasonsToString(seasons num) 
{
    switch (num) 
    {
        case €нварь: return "€нварь";
        case февраль: return "февраль";
        case март: return "март";
        case арпель: return "арпель";
        case май: return "май";
        case июнь: return "июнь";
        case июль: return "июль";
        case август: return "август";
        case сент€брь: return "сент€брь";
        case окт€брь: return "окт€брь";
        case но€брь: return "но€брь";
        case декабрь: return "декабрь";
    };
    return "ERROR";
}

int main()
{
    setlocale(LC_ALL, "Russian");
    seasons season;
    bool F = 1;
    int i;
    do {
        std::cin >> i;
        if (i == 0) {
            F = 0;
        }
        else if(i < 0 || i > 12)
        {
            std::cout << "ERROR" << std::endl;
        }
        else 
        {
            season = static_cast<seasons>(i);
            std::cout << seasonsToString(season) << std::endl;
        }
    } while (F);
    return 0;
}