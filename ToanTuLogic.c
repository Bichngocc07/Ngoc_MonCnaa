#include<stdio.h>

int main(){
	int num1 = 10;
	int num2 = 11;
	
	//TOAN&&
	int bt1 = num1 > 5 && num2 < 5;
	printf("Gia tri cua bieu thuc %d \n",bt1);
	
	
	//TOAN //
	int bt2 = num1 > 5 || num2 < 5;
	printf("Gia tri cua bieu thuc %d \n",bt2);
	
	//TOANTU ! PHU DICH
	int bt3 = num1 > 5;
	printf("Gia tri cua bt3 %d \n",bt3);
}
