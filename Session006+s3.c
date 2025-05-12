#include <stdio.h>
#include <string.h>

int main() {
    char password[10] = "123"; // Mat khau cho truoc
    char user_input[20];

    // Nhap mat khau tu nguoi dung
    printf("Nhap mat khau: ");
    scanf("%s", user_input);

    // Kiem tra mat khau
    if (strcmp(user_input, password) == 0) {
        printf("Mat khau dung!\n");
    } else {
        printf("Mat khau sai!\n");
    }

    return 0;
}

