#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char chuoi[100];
    int i = 0;
    int chu_cai = 0, chu_so = 0, ky_tu_dac_biet = 0;

    printf("Nhap chuoi: ");
    fgets(chuoi, sizeof(chuoi), stdin);

    for (i = 0; i < strlen(chuoi); i++) {
        if (isalpha(chuoi[i])) {
            chu_cai++;
        } else if (isdigit(chuoi[i])) {
            chu_so++;
        } else if (!isspace(chuoi[i])) {
            ky_tu_dac_biet++;
        }
    }

    printf("So ky tu la chu cai: %d\n", chu_cai);
    printf("So ky tu la chu so: %d\n", chu_so);
    printf("So ky tu dac biet: %d\n", ky_tu_dac_biet);

    return 0;
}

