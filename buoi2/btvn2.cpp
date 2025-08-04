#include <stdio.h>
#include <cmath>
int main(){
	
	float A, B, C, x, delta, x1, x2;
	printf("Nhap A=\n");
	scanf("%f", &A);
	 
	printf("Nhap B=\n");
	scanf("%f", &B);
	
	printf("Nhap C=\n");
	scanf("%f", &C);
	
	if (A == 0) {
		if (B != 0) {
			x = -C / B;
			printf("Phuong trinh bac nhat, x = %.2f", x);
		} else {
			if (C == 0) {
				printf("Phuong trinh vo so nghiem");
			} else {
				printf("Phuong trinh vo nghiem");
			}
		}
	} else {
		delta = B * B - 4 * A * C;

		if (delta < 0) {
			printf("Phuong trinh vo nghiem");
		} else {
			if (delta == 0) {
				x = -B / (2 * A);
				printf("Phuong trinh co nghiem kep: x = %.2f", x);
			} else {
				x1= ( -B -sqrt(delta) ) / 2 * A;
				x2= ( -B -sqrt(delta) ) / 2 * A;
				printf("phuong trinh co nghiem x1=%.2f\n",x1);
				printf("phuong trinh co nghiem x2=%.2f",x2);
			}
		}
	}
}
