#include "Weather.h"

void Weather::printWeather()
{
    cout << "�����: " << city << "\n"
        << "������: " << lat << ", �������: " << lon << "\n"
        << "�����������: " << temperature << "\n"
        << "������: " << weather << "\n"
        << "�������� �����: " << windSpeed << "\n"
        << "����������: " << clouds << "\n";
}
