#include <stdio.h>
#include <ctype.h>
#include <string.h>

int viet_hoa_chu_cai_dau(char *chuoi) {
    int viet_hoa = 1; 
    int i = 0;

    for (i = 0; i < strlen(chuoi); i++) {
        if (isspace(chuoi[i])) {
            viet_hoa = 1;
        } else if (viet_hoa && isalpha(chuoi[i])) {
            chuoi[i] = toupper(chuoi[i]); 
            viet_hoa = 0;
        }
    }
}

int main() {
    char chuoi[100];

    printf("Nhap chuoi: ");
    fgets(chuoi, sizeof(chuoi), stdin);

   
    chuoi[strcspn(chuoi, "\n")] = '\0';

    viet_hoa_chu_cai_dau(chuoi);

    printf("Chuoi sau khi viet hoa: %s\n", chuoi);

    return 0;
}

