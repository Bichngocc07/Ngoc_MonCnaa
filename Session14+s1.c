#include <stdio.h>
#include <string.h>

int main() {
    char str[100]; // Khai bao mang ky tu co kich thuoc toi da 100 ky tu

    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin); // Nhap chuoi tu ban phim

    // Loai bo ky tu xuong dong neu co
    str[strcspn(str, "\n")] = 0;

    printf("Chuoi vua nhap: %s\n", str);
    printf("Do dai chuoi: %lu\n", strlen(str));

    return 0;
}

