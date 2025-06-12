#include <stdio.h>

int main() {
    FILE *file;
    char dong[100];

    
    file = fopen("bt01.txt", "r");
    if (file == NULL) {
        printf("Khong mo duoc file.\n");
        return 1;
    }

    
    fgets(dong, sizeof(dong), file);
    fclose(file);

    
    printf("Dong dau tien trong file la: %s\n", dong);

    return 0;
}

