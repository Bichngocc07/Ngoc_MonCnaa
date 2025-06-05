#include <stdio.h>
#include <string.h>

#define MAX 50 

// Khai bao cau truc SinhVien
struct SinhVien {
    int id;
    char ten[50];
    int tuoi;
    char soDienThoai[15];
};

// Ham tim sinh vien theo ID
int timSinhVien(struct SinhVien danhSach[], int soLuong, int id) {
	int i = 0;
    for (i = 0; i < soLuong; i++) {
        if (danhSach[i].id == id) {
            return i;
        }
    }
    return -1;
}

int main() {
    struct SinhVien danhSach[MAX] = {
        {1, "Tran Quoc Thinh", 19, "0123456789"},
        {2, "Hoang Viet Long", 19, "0987654321"},
        {3, "Vu Thi Hong", 19, "0369876543"},
        {4, "Tran Minh Duc", 19, "0356897451"},
        {5, "Ngo Tu Van", 19, "0378564123"}
    };
    int soSinhVien = 5; // Co san 5 sinh vien

    // Nhap ID can sua
    int idCanSua;
    printf("Nhap ID sinh vien can sua: ");
    scanf("%d", &idCanSua);
    getchar(); // Xoa ky tu xuong dong con lai

    // Tim sinh vien theo ID
    int index = timSinhVien(danhSach, soSinhVien, idCanSua);
    if (index == -1) {
        printf("Khong tim thay sinh vien co ID %d.\n", idCanSua);
    } else {
        printf("Nhap ten moi: ");
        fgets(danhSach[index].ten, sizeof(danhSach[index].ten), stdin);
        danhSach[index].ten[strcspn(danhSach[index].ten, "\n")] = 0;

        printf("Nhap tuoi moi: ");
        scanf("%d", &danhSach[index].tuoi);
        getchar();

        printf("Da cap nhat thong tin sinh vien co ID %d.\n", idCanSua);
    }

    // In danh sach sinh vien sau khi sua
    printf("\nDanh sach sinh vien:\n");
    int i = 0;
    for (i = 0; i < soSinhVien; i++) {
        printf("ID: %d\n", danhSach[i].id);
        printf("Ten: %s\n", danhSach[i].ten);
        printf("Tuoi: %d\n", danhSach[i].tuoi);
        printf("So dien thoai: %s\n", danhSach[i].soDienThoai);
        printf("-------------------------\n");
    }

    return 0;
}

