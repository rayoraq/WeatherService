#include "JsonService.h"
using nlohmann::json;

Weather JsonService::getWeather(std::string s) {
    std::ifstream fin(s);
    if (!fin) {
        throw std::exception("Error opening file");
    }

    json j;
    j = json::parse(fin);  
    std::string city = j["name"];  //  �����
    double lon = j["coord"]["lon"];  // 49.6601
    double lat = j["coord"]["lat"];  // 58.5966
    double temperature = j["main"]["temp"];  // 5.69
    std::string weather = j["weather"][0]["description"];  // �����
    double windSpeed = j["wind"]["speed"];  // 4.27
    int clouds = j["clouds"]["all"];  //  100
    return Weather(city, lon, lat, temperature, weather, windSpeed, clouds);
}