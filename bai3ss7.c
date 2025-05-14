#include <stdio.h>

int main() {
	//khai bao san gia tri cho mang 
    int arr[5] = {1, 3, 5, 7, 9};
    int count = 0;//bien dem 
	int i; 
    printf("Cac so chan trong mang la:\n");
    for  (i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
            count++;
        }
    }

    if (count == 0) {
        printf("Mang khong chua so chan.\n");
    }

    return 0;
}

