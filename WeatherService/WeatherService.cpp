#include "XmlService.h"
#include "Weather.h"
#include <iostream>

int main() {
    XmlService xmlService;
    Weather w = xmlService.getWeather("weather.xml"); 
    w.printWeather();
    return 0;
}
