/// \file
/// \author
/// \date

#include <inttypes.h>
#include <stdio.h>

// TODO: your code goes here
float Celsius2Fahrenheit (float temp_celsius){
float temp_fahrenheit = 0;
temp_fahrenheit = temp_celsius * 9/5 + 32;
return temp_fahrenheit;
}

int main(void) {
  double temp_celsius = 0;

  printf("Geben Sie eine Temperatur in Celsius ein: ");
  scanf("%lf", &temp_celsius);

  printf("Temperatur in Fahrenheit: %.1f\n", Celsius2Fahrenheit(temp_celsius));

  return 0;
}
