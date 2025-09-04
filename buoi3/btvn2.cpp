#include<stdio.h>

int main(){
	int d,m,y,cuoithang=0;
	
	printf("nhap ngay:\n");
	scanf("%d",&d);
	
	printf("nhap thang:\n");
	scanf("%d",&m);
	
	printf("nhap nam:\n");
	scanf("%d",&y);
	
	//tim ngay cuoi thang.
	if(m==2){
		if((y%4==0&&y%100!=0)||y%400==0){
			cuoithang=29;
		}else{
			cuoithang=28;
		}
	}else{
		if(m==4||m==6||m==9||m==11){
			cuoithang=30;
		}else{
			cuoithang=31;
		}
	}
	//tim ngay ke tiep
	if(d==cuoithang){
		d==1;
		if(m==12){
			m==1;
			y++;
		}else{
			m++;
		}
	}else{
		d++;
	}
	printf("ngay ke tiep: %d/%d/%d",d,m,y);
	
}
