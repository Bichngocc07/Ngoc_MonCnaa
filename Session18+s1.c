#include <stdio.h>
#include <string.h>

// Khai bao cau truc SinhVien
struct SinhVien {
    char ten[50];
    int tuoi;
    char soDienThoai[15];
};

int main() {
    // Khai bao bien
    struct SinhVien sv;

    // Gan gia tri cho bien
    strcpy(sv.ten, "Ha Bich Ngoc");
    sv.tuoi = 18;
    strcpy(sv.soDienThoai, "0123456789");

    // In ra man hinh
    printf("Thong tin sinh vien:\n");
    printf("Ten: %s\n", sv.ten);
    printf("Tuoi: %d\n", sv.tuoi);
    printf("So dien thoai: %s\n", sv.soDienThoai);

    return 0;
}

