#include <stdio.h>

#define PI 3.14159

int main() {
    float r, circumference, area;

    
    printf("Nhap ban kinh hinh tron: ");
    scanf("%f", &r);

   
    circumference = 2 * PI * r;
    area = PI * r * r;

    
    printf("Chu vi hinh tron: %.2f\n", circumference);
    printf("Dien tich hinh tron: %.2f\n", area);

    return 0;
}

