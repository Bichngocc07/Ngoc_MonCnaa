#include <stdio.h>

int main() {
    int num;
    
    
    printf("Nhap mot so nguyen: ");
    scanf("%d", &num);
    
    
    if (num >= 0) {
        printf("So ban nhap la so duong.\n");
    } else {
        printf("So ban nhap la so am.\n");
    }
    
    return 0;
}


