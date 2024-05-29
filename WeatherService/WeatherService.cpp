#include <iostream>
<<<<<<< HEAD
#include "JsonService.h"
#include "Weather.h"

int main()
{
    JsonService js;
    Weather w = js.getWeather("weather.json");
    std::cout << "Hello World!\n";
=======
#include "Weather.h"
#include "XmlService.h"

int main()
{
    XmlService xs;
    Weather w = xs.getWeather("weather.xml");
>>>>>>> feature-xml
}
