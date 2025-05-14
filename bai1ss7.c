#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int length = sizeof(arr) / sizeof(arr[0]);
	int i;
    for (i = 0; i < length; i++) {
        printf("%d\n", arr[i]);
    }

    printf("do dai cua mang la: %d\n", length);
    return 0;
}

