#include <stdio.h>
int main(){
	
	float a,b,c;
	printf("nhap a=\n");
	scanf("%f",&a);
	
	printf("nhap b=\n");
	scanf("%f",&b);
	
	printf("nhap c=\n");
	scanf("%f",&c);
	
	if((a+b)>c){
		printf("day la tam giac");
	}else{
		if((a+c)>b){
			printf("day la tam giac"); 
		}else{
			if((b+c)>a){
				printf("day la tam giac"); 
			}else{
				printf("day khong phai tam giac"); 
			} 
		} 
	} 
}
