#include <stdio.h>

int main() {
    int n,i;
    int array[100]; //mang 100  
    // nhap pgan tu 
    printf("Nhap so phan tu cua mang");
    scanf("%d", &n);
    //kiem tra xem co duyt khong 
    if (n <= 0 || n > 100) {
        printf("So phan tu khong hop le.\n");
        return 1;
    }
    // nhap phan tu chay vong lap 
    for (i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    // in phan tu 
    printf("\nCac phan tu vua nhap la:\n");
    for (i = 0; i < n; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }

    return 0;
}

