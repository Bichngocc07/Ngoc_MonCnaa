#include <stdio.h>

int main() {
    int num;
    
    
    printf("Nhap mot so nguyen: ");
    scanf("%d", &num);
    
    
    if (num % 2 == 0) {
        printf("So ban nhap la so chan.\n");
    } else {
        printf("So ban nhap la so le.\n");
    }
    
    return 0;
}

