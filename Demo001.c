/////THE HIEN GIAI THUAT THEO NGON NGU TU NHIEN
//Buoc1: Bat dau chuong trinh
//Buoc2: Khai bao 2bien num1,num2
    //Khai bao bien total
//Buoc3: Nhap gia tri cho 2 so va luu vao bien tuong ung bien num1 va num2
//Buoc4: Cong 2 gia tri 2 bien num1 va num2 sau do g�n tri cho bien total
//Buoc5: In gia tri cua bien total ra m�n h�nh 
//Buoc6: Ket thuc chuong tr�nh 



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
////////////Bai toan : Thiet ke giai thuat nhap vao 2 so va in ra ket qua tong 2 so d� 
#include<stdio.h>

int main(){
    // Khai b�o bien
    int num1, num2, total;
    
    // Nhap gi� tri cho bien num1 tu b�n ph�m
    printf("Moi ban nhap so thu nhat: ");
    scanf("%d", &num1);
    
    // Nhap gi� tri cho bien num2 tu b�n ph�m
    printf("Moi ban nhap so thu hai: ");
    scanf("%d", &num2);
    
    // T�nh tong hai so
    total = num1 + num2;
    printf("%d + %d = %d",num1, num2, total);
    
    return 0;
}

