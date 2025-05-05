#include <stdio.h>

int main() {
    float canhDay, chieuCao;
    float dienTich;
	//nhap so 
    printf("Moi ban nhap do dai canh day: ");
    scanf("%f", &canhDay);

    printf("Moi ban nhap chieu cao: ");
    scanf("%f", &chieuCao);
	// tinh dien tich 
    dienTich = 0.5 * canhDay * chieuCao;
    //in dien tich 
    printf("Dien tich tam giac la: %.2f\n", dienTich);

    return 0;
}

