#include <stdio.h>

int main() {
	int i;
    int arr[] = {10, 25, 30, 45, 60, 75};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x, found = 0;

    printf("Nhap mot phan tu can tim: ");
    scanf("%d", &x);

    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("Vi tri phan tu trong mang la %d\n", i);
            found = 1;
            break; // thoat vong lap sau khi tim thay
        }
    }

    if (!found) {
        printf("Phan tu khong ton tai trong mang.\n");
    }

    return 0;
}

