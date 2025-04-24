#include <stdio.h>

int main() {
    float celsius, fahrenheit;

   
    printf("Nhap nhiet do (Celsius): ");
    scanf("%f", &celsius);

    
    fahrenheit = (celsius * 9/5) + 32;

   
    printf("Nhiet do theo Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}

