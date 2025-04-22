#include <stdio.h>

int main() {
    // Khoi tao bien chieu dai va chieu rong hinh chu nhat
    int chieu_dai = 8;
    int chieu_rong = 5;

    // Tinh chu vi va dien tich
    int chu_vi = (chieu_dai + chieu_rong) * 2;
    int dien_tich = chieu_dai * chieu_rong;

    // Hien thi ket qua
    printf("Chu vi hinh chu nhat: %d\n", chu_vi);
    printf("Dien tich hinh chu nhat: %d\n", dien_tich);

    return 0;
}

