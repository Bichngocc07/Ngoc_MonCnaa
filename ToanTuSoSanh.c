#include<stdio.h>
int main(){
	int num1 = 10;
	int num2 = 20;
	
	//TOANTU >
	int bt1 = num1 > num2;
	printf("Gia tri bieu thuc bt1 %d \n",bt1);
	//TOANTU <
	int bt2 = num1 < num2;
	printf("Gia tri bieu thuc bt2 %d \n",bt2);
	//TOANTU >= <=
	int bt3 = num1 >= num2;
	printf("Gia tri bieu thuc bt3 %d \n",bt3);
	//TOANTU !=
	int bt4 = num1 != num2;
	printf("Gia tri bieu thuc bt4 %d \n",bt4);
	//TOANTU==
	int bt5 = num1 == num2;
	printf("Gia tri bieu thuc bt5 %d \n",bt5);
}
