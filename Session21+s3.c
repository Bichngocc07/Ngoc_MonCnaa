#include <stdio.h>

int main() {
    FILE *file;
    char chuoi[100];

    
    file = fopen("bt01.txt", "a");
    if (file == NULL) {
        printf("Khong mo duoc file.\n");
        return 1;
    }

    
    printf("Nhap chuoi can ghi them vao file: ");
    fgets(chuoi, sizeof(chuoi), stdin);

    
    fprintf(file, "%s", chuoi);
    fclose(file);

    printf("Da ghi them vao file bt01.txt thanh cong!\n");
    return 0;
}

