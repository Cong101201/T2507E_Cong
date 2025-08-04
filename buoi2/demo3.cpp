#include <stdio.h>
int main(){
	
	float A,B,x;
	printf("Nhap A=\n");
	scanf("%f",&A);
	 
	printf("Nhap B=\n");
	scanf("%f",&B);
	
	if(A!=0){
		x=-B/A;
		printf(" Gia tri cua x la %f",x);
	}else{
		if(B==0){
			printf("phuong trinh vo so nghiem");
		}else{
			printf("phuong trinh vo nghiem");
		}
	}
}
