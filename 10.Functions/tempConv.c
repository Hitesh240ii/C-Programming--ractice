#include <stdio.h>

float celsiusToFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    float celsius = 37;
    printf("%.2f Celsius is %.2f Fahrenheit\n", celsius, celsiusToFahrenheit(celsius));
    return 0;
}
