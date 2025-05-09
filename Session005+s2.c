#include <stdio.h>

int main() {
    int target = 42; // So nguyen cho truoc
    int userInput;

    printf("Nhap mot so: ");
    scanf("%d", &userInput);

    while (userInput != target) {
        printf("Sai! Hay nhap lai: ");
        scanf("%d", &userInput);
    }

    printf("Chinh xac! Chuong trinh ket thuc.\n");
    return 0;
}

