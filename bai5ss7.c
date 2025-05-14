#include <stdio.h>

int main() {
    int arr[5] = {12, 5, 33, 7, 20}; // gan san 5 phan tuu 
    int max = arr[0];
    int min = arr[0];
    int i; 

    // duyet mang de tim ma,min 
    for (i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    //in ket quua 
    printf("Phan tu lon nhat trong mang la: %d\n", max);
    printf("Phan tu nho nhat trong mang la: %d\n", min);

    return 0;
}

