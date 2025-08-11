#include <stdio.h>

int main(){
	int n;
	printf("nhap n=\n");
	scanf("%d",&n);
	
	int nd = 0;
	
	while(n!=0){
		int dv = n%10;
		nd = nd*10 + dv;
		n /=10;
	}
	printf("so dao nguoc %d",nd);
}
