#include "JsonService.h"
﻿#include "XmlService.h"
#include "Weather.h"
#include <iostream>
int main() {
	JsonService js;
	Weather w_json = js.getWeather("weather.json");
	XmlService xs;
	Weather w_xml = xs.getWeather("weather.xml");
}