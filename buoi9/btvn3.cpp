#include<stdio.h>

int BCNN (int a,int b){
	int min=(a<b)?a:b;
	while(1==1){
		if(min%a==0&&min%b==0){
			return min;
		}
		min++;
	}
}

int main(){
	int x,y;
	printf("nhap hai so: ");
	scanf("%d%d",&x,&y);
	printf("boi chung nho nhat cua %d va %d la %d.\n",x,y,BCNN(x,y));
	return 0;	
}
