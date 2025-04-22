#include<stdio.h>
int main(){
	int num1 = 20;
	int num2 = 7;
	
	//ToanTu+
	int tong = num1 + num2;
	printf("Phep tong la %d\n",tong);
	
	
	//ToanTu-
	int hieu = num1 - num2;
	printf("Phep hieu la %d \n",hieu);
	
	//ToanTu*
	int tinh = num1 * num2;
	printf("Phep nhan la %d\n",tinh);
	
	
	//ToanTu/
	int chia = num1 / num2;
	printf("Phep chia la %d\n",chia);
	
	//Phep chia lay du %
	int chiaLayDu = num1 % num2;
	printf("Chia lay du %d\n",chiaLayDu);
	return 0;
}
