#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int arr[MAX];
int size = 0;
int i = 0;
int j;

// Ham nhap mang
int nhap_mang() {
    printf("Nhap so phan tu (toi da 100): ");
    scanf("%d", &size);
    if (size > MAX || size < 0) {
        printf("So luong khong hop le!\n");
        size = 0;
        return 1;
    }
    for (i = 0; i < size; i++) {
        printf("Phan tu [%d]: ", i);
        scanf("%d", &arr[i]);
    }
    return 0;
}

// Ham in mang
int in_mang() {
    if (size == 0) {
        printf("Mang dang rong!\n");
        return 1;
    }
    printf("Cac phan tu dang quan ly: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

// Ham them phan tu
int them_phan_tu() {
    if (size >= MAX) {
        printf("Mang da day!\n");
        return 1;
    }
    int vi_tri, gia_tri;
    printf("Nhap vi tri can chen (0 -> %d): ", size);
    scanf("%d", &vi_tri);
    if (vi_tri < 0 || vi_tri > size) {
        printf("Vi tri khong hop le!\n");
        return 1;
    }
    printf("Nhap gia tri can chen: ");
    scanf("%d", &gia_tri);
    for (i = size; i > vi_tri; i--) {
        arr[i] = arr[i - 1];
    }
    arr[vi_tri] = gia_tri;
    size++;
    return 0;
}

// Ham sua phan tu
int sua_phan_tu() {
    int vi_tri, gia_tri;
    printf("Nhap vi tri can sua (0 -> %d): ", size - 1);
    scanf("%d", &vi_tri);
    if (vi_tri < 0 || vi_tri >= size) {
        printf("Vi tri khong hop le!\n");
        return 1;
    }
    printf("Nhap gia tri moi: ");
    scanf("%d", &gia_tri);
    arr[vi_tri] = gia_tri;
    return 0;
}

// Ham xoa phan tu
int xoa_phan_tu() {
    int vi_tri;
    printf("Nhap vi tri can xoa (0 -> %d): ", size - 1);
    scanf("%d", &vi_tri);
    if (vi_tri < 0 || vi_tri >= size) {
        printf("Vi tri khong hop le!\n");
        return 1;
    }
    for (i = vi_tri; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
    return 0;
}

// Ham sap xep tang dan
int sap_xep_tang() {
    for (i = 0; i < size - 1; i++) {
        for (j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Da sap xep tang dan.\n");
    return 0;
}

// Ham sap xep giam dan
int sap_xep_giam() {
    for (i = 0; i < size - 1; i++) {
        for (j = i + 1; j < size; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Da sap xep giam dan.\n");
    return 0;
}

// Tim kiem tuyen tinh
int tim_kiem_tuyen_tinh() {
    int x, found = 0;
    printf("Nhap gia tri can tim: ");
    scanf("%d", &x);
    for (i = 0; i < size; i++) {
        if (arr[i] == x) {
            printf("Tim thay tai vi tri %d\n", i);
            found = 1;
        }
    }
    if (!found) {
        printf("Khong tim thay phan tu!\n");
    }
    return 0;
}

// Tim kiem nhi phan
int tim_kiem_nhi_phan() {
    int x;
    printf("Nhap gia tri can tim: ");
    scanf("%d", &x);

    sap_xep_tang();

    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == x) {
            printf("Tim thay tai vi tri %d (sau khi sap xep tang dan)\n", mid);
            return 0;
        } else if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    printf("Khong tim thay phan tu!\n");
    return 0;
}

// Ham main
int main() {
    int lua_chon;
    char sub_menu;

    do {
        printf("\nMENU\n");
        printf("1. Nhap so phan tu va gia tri cac phan tu\n");
        printf("2. In ra gia tri cac phan tu dang quan ly\n");
        printf("3. Them mot phan tu vao vi tri chi dinh\n");
        printf("4. Sua mot phan tu o vi tri chi dinh\n");
        printf("5. Xoa mot phan tu o vi tri chi dinh\n");
        printf("6. Sap xep cac phan tu\n");
        printf("7. Tim kiem phan tu nhap vao\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &lua_chon);

        switch (lua_chon) {
            case 1: nhap_mang(); break;
            case 2: in_mang(); break;
            case 3: them_phan_tu(); break;
            case 4: sua_phan_tu(); break;
            case 5: xoa_phan_tu(); break;
            case 6:
                printf("a. Giam dan\n");
                printf("b. Tang dan\n");
                printf("Lua chon: ");
                scanf(" %c", &sub_menu);
                if (sub_menu == 'a') sap_xep_giam();
                else if (sub_menu == 'b') sap_xep_tang();
                else printf("Lua chon khong hop le!\n");
                break;
            case 7:
                printf("a. Tim kiem tuyen tinh\n");
                printf("b. Tim kiem nhi phan\n");
                printf("Lua chon: ");
                scanf(" %c", &sub_menu);
                if (sub_menu == 'a') tim_kiem_tuyen_tinh();
                else if (sub_menu == 'b') tim_kiem_nhi_phan();
                else printf("Lua chon khong hop le!\n");
                break;
            case 8: printf("Thoat chuong trinh.\n"); break;
            default: printf("Lua chon khong hop le!\n");
        }
    } while (lua_chon != 8);

    return 0;
}

