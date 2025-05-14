#include <stdio.h>
int main(){
	//khai bao mang 5 ophan tu
	int array[5];
	int i;
	//nhap phan tu 
	printf("nhap 5 so nguyen\n");
	for(i=0;i<5;i++){
		printf("phan tu thu %d",i+1);
		scanf("%d",&array[i]);
	}
	//in ra cac phan tu da nhap
    printf("\nCac phan tu trong mang la:\n");
    for (i = 0; i < 5; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }

    return 0;
}
