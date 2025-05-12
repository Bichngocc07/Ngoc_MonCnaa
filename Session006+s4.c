#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta, x1, x2;

    // Nhap he so a, b, c
    printf("Nhap he so a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    // Kiem tra neu a = 0
    if (a == 0) {
        printf("Khong phai phuong trinh bac hai\n");
        return 0;
    }

    // Tinh delta
    delta = b * b - 4 * a * c;

    // Xet cac truong hop cua delta
    if (delta < 0) {
        printf("Phuong trinh vo nghiem\n");
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("Phuong trinh co nghiem kep: x = %.2f\n", x1);
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Phuong trinh co hai nghiem phan biet: x1 = %.2f, x2 = %.2f\n", x1, x2);
    }

    return 0;
}

