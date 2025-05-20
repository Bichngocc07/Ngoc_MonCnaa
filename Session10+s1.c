#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int x, found = 0;

    printf("Nhap gia tri can tim: ");
    scanf("%d", &x);

    int i = 0; 
    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("Phan tu %d nam o vi tri index %d.\n", x, i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Phan tu %d khong ton tai trong mang.\n", x);
    }

    return 0;
}

