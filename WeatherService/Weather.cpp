#include "Weather.h"

void Weather::printWeather()
{
    cout << "Город: " << city << "\n"
        << "Широта: " << lat << ", Долгота: " << lon << "\n"
        << "Температура: " << temperature << "\n"
        << "Погода: " << weather << "\n"
        << "Скорость ветра: " << windSpeed << "\n"
        << "Облачность: " << clouds << "\n";
}
