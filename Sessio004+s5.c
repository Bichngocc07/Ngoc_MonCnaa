#include <stdio.h>

int main() {
    int num1, num2, num3;

   
    printf("Nhap ba so nguyen: ");
    scanf("%d %d %d", &num1, &num2, &num3);

   
    if ((num3 > num1 && num3 < num2) || (num3 > num2 && num3 < num1)) {
        printf("So thu ba nam trong khoang giua hai so dau tien.\n");
    } else {
        printf("So thu ba khong nam trong khoang giua hai so dau tien.\n");
    }

    return 0;
}

