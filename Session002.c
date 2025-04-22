#include <stdio.h>

int main() {
    // Bien kieu so nguyên (luu tru so nguyên)
    int tuoi = 18; // Tuoi cua mot nguoi

    // Bien kieu so thuc (luu tru so thuc có dau cham thap phân)
    float chieu_cao = 1.55; // Chieu cao tính bang mét

    // Bien kieu so thuc có do chính xác cao hon
    double pi = 3.1415926535; // Giá tri cua so Pi

    // Bi?n ki?u ký t? (chi luu mot ký tu)
    char ky_tu = 'N'; // Mot ký tu

    // Bien kieu boolean (dúng hoac sai)
    _Bool la_sinh_vien = 1; // 1 là dúng, 0 là sai

    // Chuoi ký tu (mang các ký tu)
    char ten[] = "Ngoc"; // Tên cua mot nguoi

    // In giá tri các bien
    printf("Tuoi: %d\n", tuoi);
    printf("Chieu cao: %.2f\n", chieu_cao);
    printf("Pi: %.10lf\n", pi);
    printf("Ký tu: %c\n", ky_tu);
    printf("Là sinh vien: %d\n", la_sinh_vien);
    printf("Ten: %s\n", ten);

    return 0;
}

