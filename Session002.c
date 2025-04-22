#include <stdio.h>

int main() {
    // Bien kieu so nguy�n (luu tru so nguy�n)
    int tuoi = 18; // Tuoi cua mot nguoi

    // Bien kieu so thuc (luu tru so thuc c� dau cham thap ph�n)
    float chieu_cao = 1.55; // Chieu cao t�nh bang m�t

    // Bien kieu so thuc c� do ch�nh x�c cao hon
    double pi = 3.1415926535; // Gi� tri cua so Pi

    // Bi?n ki?u k� t? (chi luu mot k� tu)
    char ky_tu = 'N'; // Mot k� tu

    // Bien kieu boolean (d�ng hoac sai)
    _Bool la_sinh_vien = 1; // 1 l� d�ng, 0 l� sai

    // Chuoi k� tu (mang c�c k� tu)
    char ten[] = "Ngoc"; // T�n cua mot nguoi

    // In gi� tri c�c bien
    printf("Tuoi: %d\n", tuoi);
    printf("Chieu cao: %.2f\n", chieu_cao);
    printf("Pi: %.10lf\n", pi);
    printf("K� tu: %c\n", ky_tu);
    printf("L� sinh vien: %d\n", la_sinh_vien);
    printf("Ten: %s\n", ten);

    return 0;
}

