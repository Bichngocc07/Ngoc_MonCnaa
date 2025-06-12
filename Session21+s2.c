#include <stdio.h>

int main() {
    FILE *file;
    char ky_tu;

    
    file = fopen("bt01.txt", "r");
    if (file == NULL) {
        printf("Khong mo duoc file.\n");
        return 1;
    }

    
    ky_tu = fgetc(file);
    fclose(file);

    
    printf("Ky tu dau tien trong file la: %c\n", ky_tu);

    return 0;
}

