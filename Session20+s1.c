#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

typedef struct {
    int maSach;
    char tenSach[50];
    char tacGia[50];
    float giaTien;
    char theLoai[30];
} Sach;

Sach books[MAX];
int soLuong = 0;

int nhapSach() {
    printf("Nhap so luong sach: ");
    scanf("%d", &soLuong);
    int i = 0;
    for (i = 0; i < soLuong; i++) {
        printf("Nhap ma sach: ");
        scanf("%d", &books[i].maSach);
        printf("Nhap ten sach: ");
        scanf(" %[^\n]", books[i].tenSach);
        printf("Nhap tac gia: ");
        scanf(" %[^\n]", books[i].tacGia);
        printf("Nhap gia tien: ");
        scanf("%f", &books[i].giaTien);
        printf("Nhap the loai: ");
        scanf(" %[^\n]", books[i].theLoai);
    }
}

int hienThiSach() {
    printf("\nDanh sach sach:\n");
    int i = 0;
    for (i = 0; i < soLuong; i++) {
        printf("Ma sach: %d\n", books[i].maSach);
        printf("Ten sach: %s\n", books[i].tenSach);
        printf("Tac gia: %s\n", books[i].tacGia);
        printf("Gia tien: %.2f\n", books[i].giaTien);
        printf("The loai: %s\n\n", books[i].theLoai);
    }
}

int themSachVaoViTri() {
	int i;
    if (soLuong >= MAX) {
        printf("Danh sach da day, khong the them!\n");
        return;
    }
    int viTri;
    printf("Nhap vi tri muon them sach (0-%d): ", soLuong);
    scanf("%d", &viTri);

    if (viTri < 0 || viTri > soLuong) {
        printf("Vi tri khong hop le!\n");
        return;
    }

    for (i = soLuong; i > viTri; i--) {
        books[i] = books[i - 1];
    }

    printf("Nhap ma sach: ");
    scanf("%d", &books[viTri].maSach);
    printf("Nhap ten sach: ");
    scanf(" %[^\n]", books[viTri].tenSach);
    printf("Nhap tac gia: ");
    scanf(" %[^\n]", books[viTri].tacGia);
    printf("Nhap gia tien: ");
    scanf("%f", &books[viTri].giaTien);
    printf("Nhap the loai: ");
    scanf(" %[^\n]", books[viTri].theLoai);

    soLuong++;
}

int xoaSachTheoMa() {
    int ma;
    int i = 0;
    printf("Nhap ma sach can xoa: ");
    scanf("%d", &ma);
    int found = -1;

    for (i = 0; i < soLuong; i++) {
        if (books[i].maSach == ma) {
            found = i;
            break;
        }
    }

    if (found == -1) {
        printf("Khong tim thay sach voi ma %d!\n", ma);
        return;
    }

    for (i = found; i < soLuong - 1; i++) {
        books[i] = books[i + 1];
    }

    soLuong--;
    printf("Sach da xoa thanh cong!\n");
}

int capNhatSach() {
    int ma;
    int i = 0;
    printf("Nhap ma sach can cap nhat: ");
    scanf("%d", &ma);

    for (i = 0; i < soLuong; i++) {
        if (books[i].maSach == ma) {
            printf("Nhap ten sach moi: ");
            scanf(" %[^\n]", books[i].tenSach);
            printf("Nhap tac gia moi: ");
            scanf(" %[^\n]", books[i].tacGia);
            printf("Nhap gia tien moi: ");
            scanf("%f", &books[i].giaTien);
            printf("Nhap the loai moi: ");
            scanf(" %[^\n]", books[i].theLoai);
            printf("Cap nhat thanh cong!\n");
            return;
        }
    }

    printf("Khong tim thay sach voi ma %d!\n", ma);
}

int sapXepSachTheoGia(int tangDan) {
	int i = 0;
	int j = 0;
    for (i = 0; i < soLuong - 1; i++) {
        for (j = i + 1; j < soLuong; j++) {
            if ((tangDan && books[i].giaTien > books[j].giaTien) ||
                (!tangDan && books[i].giaTien < books[j].giaTien)) {
                Sach temp = books[i];
                books[i] = books[j];
                books[j] = temp;
            }
        }
    }
    printf("Da sap xep sach theo gia!\n");
}

int timKiemSach() {
    char ten[50];
    printf("Nhap ten sach can tim: ");
    scanf(" %[^\n]", ten);

    printf("\nKet qua tim kiem:\n");
    int i = 0;
    for (i = 0; i < soLuong; i++) {
        if (strstr(books[i].tenSach, ten) != NULL) {
            printf("Ma sach: %d\n", books[i].maSach);
            printf("Ten sach: %s\n", books[i].tenSach);
            printf("Tac gia: %s\n", books[i].tacGia);
            printf("Gia tien: %.2f\n", books[i].giaTien);
            printf("The loai: %s\n\n", books[i].theLoai);
        }
    }
}

int main() {
    int luaChon;
    do {
        printf("\nMENU\n");
        printf("1. Nhap so luong va thong tin sach\n");
        printf("2. Hien thi thong tin sach\n");
        printf("3. Them sach vao vi tri\n");
        printf("4. Xoa sach theo ma sach\n");
        printf("5. Cap nhat thong tin sach theo ma sach\n");
        printf("6. Sap xep sach theo gia (1: Tang, 0: Giam)\n");
        printf("7. Tim kiem sach theo ten sach\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &luaChon);

        switch (luaChon) {
            case 1:
                nhapSach();
                break;
            case 2:
                hienThiSach();
                break;
            case 3:
                themSachVaoViTri();
                break;
            case 4:
                xoaSachTheoMa();
                break;
            case 5:
                capNhatSach();
                break;
            case 6:
                printf("Nhap loai sap xep (1: Tang, 0: Giam): ");
                int tangDan;
                scanf("%d", &tangDan);
                sapXepSachTheoGia(tangDan);
                break;
            case 7:
                timKiemSach();
                break;
            case 8:
                printf("Thoat chuong trinh\n");
                break;
            default:
                printf("Lua chon khong hop le, vui long nhap lai!\n");
        }
    } while (luaChon != 8);

    return 0;
}

