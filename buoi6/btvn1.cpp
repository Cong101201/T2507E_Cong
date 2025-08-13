#include <stdio.h>

int main() {
    int n, i, tonguoc = 0 ;

    printf("Nhap mot so nguyen duong n: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
            tonguoc += i;
		}
	} 
	printf("\nTong cac uoc = %d\n", tonguoc);
}

