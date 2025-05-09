#include <stdio.h>
int main() {
    int choice;
    double num1, num2;

    printf("Nhap hai so bat ky: ");
    scanf("%lf %lf", &num1, &num2);

    do {
        // Hi?n th? menu
        printf("\nCALCULATOR\n");
        printf("1. Tong 2 so\n");
        printf("2. Hieu 2 so\n");
        printf("3. Tich 2 so\n");
        printf("4. Thuong 2 so\n");
        printf("5. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        // Xu lý lua chon
        switch (choice) {
            case 1:
                printf("Tong: %.2lf\n", num1 + num2);
                break;
            case 2:
                printf("Hieu: %.2lf\n", num1 - num2);
                break;
            case 3:
                printf("Tich: %.2lf\n", num1 * num2);
                break;
            case 4:
                if (num2 != 0)
                    printf("Thuong: %.2lf\n", num1 / num2);
                else
                    printf("Loi: Khong the chia cho 0!\n");
                break;
            case 5:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le! Hay nhap lai.\n");
        }
    } while (choice != 5);

    return 0;
}

