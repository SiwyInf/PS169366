#include <stdio.h>
#include <stdlib.h>

struct WeatherInfo{
double temperature;
double humidity;
double windSpeed;
};

int main()
{
    struct WeatherInfo lato = {30.4, 12.0,7.5};
    struct WeatherInfo zima = {-10.4, 2.0,17.5};
    struct WeatherInfo jesien = {9.6, 16.0,27.5};
    struct WeatherInfo wiosna = {20.0, 25.0,50.5};
    return 0;
}
