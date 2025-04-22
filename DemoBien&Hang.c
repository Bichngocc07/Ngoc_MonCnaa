#include<stdio.h>

int main(){
	//Khai bao bien kieu du lieu int
	int age;
	
	//Kai bao bien kieu du lieu va gan gia tri
	int year = 2024;
	
	//Truy xuat va lay gias tri cua bien
	printf("Nam nay la %d", year);
	
	//Thay doi gia tri cua bien 
	age = 18;
	printf("\nNam nay toi %d tuoi",age);
	
	//Khai bao bien co kieu du lieu char
	char kyTu = 'a';
	printf("\nGia tri cua bien kyTu la %c",kyTu);
	
	//Khai bao bien co kieu du lieu float
	float pi = 3.14;
	
	printf("\nGia tri la %.2f",pi);
	return 0;
}
