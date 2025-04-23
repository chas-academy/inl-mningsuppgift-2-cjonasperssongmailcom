#include <stdio.h>

/*
    This program converts celsius to fahrenheit
    and fahrenheit to celsius
    Written by Jonas Persson 23.04.2025
*/

// This is where you add the two functions

/*
    Converts fahrenheit to celsius
    returns a float
*/
float fahrenheit_to_celsius(float temp){
    float celsius = ((temp - 32) * 5) / 9;
    return celsius;
}

/*
    Converts celsius to fahrenheit
    returns a float
*/
float celsius_to_fahrenheit(float temp){
    float fahrenheit = ((temp * 9) / 5) + 32;
    return fahrenheit;
}

int main() {
    float temp_f = 100.0;
    float temp_c = 37.0;

    printf("%.1f\n", fahrenheit_to_celsius(temp_f));  // Expected output: 37.8
    printf("%.1f\n", celsius_to_fahrenheit(temp_c));  // Expected output: 98.6

    return 0;
}