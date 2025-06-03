#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Khai bao ham
void nhapChuoi(char **str);
void inChuoi(char *str);
int demChuCai(char *str);
int demChuSo(char *str);
int demKyTuDacBiet(char *str);

int main() {
    char *str = NULL;
    int luaChon;

    do {
        printf("\nMENU\n");
        printf("1. Nhap vao chuoi\n");
        printf("2. In ra chuoi\n");
        printf("3. Dem so luong chu cai trong chuoi\n");
        printf("4. Dem so luong chu so trong chuoi\n");
        printf("5. Dem so luong ky tu dac biet trong chuoi\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &luaChon);
        getchar();  // Loai bo ky tu '\n' sau khi nhap so

        switch (luaChon) {
            case 1:
                nhapChuoi(&str);
                break;
            case 2:
                inChuoi(str);
                break;
            case 3:
                printf("So luong chu cai: %d\n", demChuCai(str));
                break;
            case 4:
                printf("So luong chu so: %d\n", demChuSo(str));
                break;
            case 5:
                printf("So luong ky tu dac biet: %d\n", demKyTuDacBiet(str));
                break;
            case 6:
                free(str);
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai!\n");
        }
    } while (luaChon != 6);

    return 0;
}

// Ham nhap chuoi
void nhapChuoi(char **str) {
    char buffer[1000];
    printf("Nhap chuoi: ");
    fgets(buffer, sizeof(buffer), stdin);
    buffer[strcspn(buffer, "\n")] = '\0';  // Loai bo ky tu '\n'

    *str = (char *)malloc(strlen(buffer) + 1);
    strcpy(*str, buffer);
}

// Ham in chuoi
void inChuoi(char *str) {
    if (str) {
        printf("Chuoi vua nhap: %s\n", str);
    } else {
        printf("Chua nhap chuoi!\n");
    }
}

// Ham dem chu cai
int demChuCai(char *str) {
    int count = 0;
    if (str) {
        while (*str) {
            if (isalpha(*str)) {
                count++;
            }
            str++;
        }
    }
    return count;
}

// Ham dem chu so
int demChuSo(char *str) {
    int count = 0;
    if (str) {
        while (*str) {
            if (isdigit(*str)) {
                count++;
            }
            str++;
        }
    }
    return count;
}

// Ham dem ky tu dac biet
int demKyTuDacBiet(char *str) {
    int count = 0;
    if (str) {
        while (*str) {
            if (!isalnum(*str)) { // Khong phai chu cai hoac so
                count++;
            }
            str++;
        }
    }
    return count;
}

