#include <stdio.h>

int main(){
	int st;
	printf("nhap so tien muon rut:\n");
	scanf("%d",st);
	
	int s500 = st/500;
	st = st % 500;
	int s200 = st/200;
	st = st % 200;
	int s100 = st/100;
	st = st % 100;
	int s50 = st/50;
	st = st % 50;
	int s20 = st/20;
	st = st % 20;
	int s10 = st/10;
	st = st % 10;
	printf("can tra ve %d 500k, %d 200k, %d 100k, %d 50k, %d 20k, %d 10k", s500, s200, s100, s50, s20, s10);
} 
