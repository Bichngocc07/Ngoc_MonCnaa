/////THE HIEN GIAI THUAT THEO NGON NGU TU NHIEN
//Buoc1: Bat dau chuong trinh
//Buoc2: Khai bao 2bien num1,num2
    //Khai bao bien total
//Buoc3: Nhap gia tri cho 2 so va luu vao bien tuong ung bien num1 va num2
//Buoc4: Cong 2 gia tri 2 bien num1 va num2 sau do gán tri cho bien total
//Buoc5: In gia tri cua bien total ra màn hình 
//Buoc6: Ket thuc chuong trình 



/////////////Du dung ma the hien thuat toan
//BEGIN
//    BECLRAGE num1,num2,total
//    
//    INPUT num1,num2
//    
//    SET total = num1 + num2
//    
//    DISPLAY total
//END
////////////Bai toan : Thiet ke giai thuat nhap vao 2 so va in ra ket qua tong 2 so dó 
#include<stdio.h>

int main(){
    // Khai báo bien
    int num1, num2, total;
    
    // Nhap giá tri cho bien num1 tu bàn phím
    printf("Moi ban nhap so thu nhat: ");
    scanf("%d", &num1);
    
    // Nhap giá tri cho bien num2 tu bàn phím
    printf("Moi ban nhap so thu hai: ");
    scanf("%d", &num2);
    
    // Tính tong hai so
    total = num1 + num2;
    printf("%d + %d = %d",num1, num2, total);
    
    return 0;
}

