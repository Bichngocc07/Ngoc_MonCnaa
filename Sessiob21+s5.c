#include <stdio.h>
//Bai nay loi em khong sua duoc aaaaa
int main() {
    FILE *file;
    int so_dong;
    char dong[100];

    
    file = fopen("bt05.txt", "w");
    if (file == NULL) {
        printf("Khong mo duoc file.\n");
        return 1;
    }

    
    printf("Nhap so dong muon ghi vao file: ");
    scanf("%d", &so_dong);
    getchar(); 

    
    int i = 0;
    for (i = 0; i < so_dong; i++) {
        printf("Nhap dong thu %d: ", i + 1);
        fgets(dong, sizeof(dong), stdin);
        fprintf(file, "%s", dong);
    }
    fclose(file);

   
    file = fopen("bt05.txt", "r");
    if (file == NULL) {
        printf("Khong mo duoc file.\n");
        return 1;
    }

    printf("\nNoi dung trong file bt05.txt:\n");
    while (fgets(dong, sizeof(dong), file)) {
        printf("%s", dong);
    }
    fclose(file);

    return 0;
}

