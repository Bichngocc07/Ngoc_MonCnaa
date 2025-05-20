#include <stdio.h>

// Ham sap xep chon (Selection Sort)
int sapXepChon(int mang[], int kichThuoc) {
	int i = 0;
    for (i = 0; i < kichThuoc - 1; i++) {
        int minIndex = i;
        int j = 0;
        for (j = i + 1; j < kichThuoc; j++) {
            if (mang[j] < mang[minIndex]) {
                minIndex = j;
            }
        }
        // Hoan doi gia tri
        int temp = mang[minIndex];
        mang[minIndex] = mang[i];
        mang[i] = temp;
    }
}

// Ham tim kiem nhi phan
int timKiemNhiPhan(int mang[], int kichThuoc, int giaTri) {
    int left = 0, right = kichThuoc - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (mang[mid] == giaTri) {
            return mid; // Tim thay gia tri
        }
        if (mang[mid] < giaTri) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1; // Khong tim thay
}

// Ham chinh
int main() {
    int mang[] = {5, 1, 4, 2, 8};
    int kichThuoc = sizeof(mang) / sizeof(mang[0]);
    int giaTri;

    printf("Mang truoc khi sap xep: ");
    int i = 0;
    for (i = 0; i < kichThuoc; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");

    // Goi ham sap xep
    sapXepChon(mang, kichThuoc);

    printf("Mang sau khi sap xep: ");
    for (i = 0; i < kichThuoc; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");

    // Nhap gia tri can tim
    printf("Nhap mot so nguyen bat ky: ");
    scanf("%d", &giaTri);

    // Goi ham tim kiem nhi phan
    int viTri = timKiemNhiPhan(mang, kichThuoc, giaTri);
    if (viTri != -1) {
        printf("Phan tu %d duoc tim thay tai vi tri %d.\n", giaTri, viTri);
    } else {
        printf("Phan tu %d khong co trong mang.\n", giaTri);
    }

    return 0;
}

