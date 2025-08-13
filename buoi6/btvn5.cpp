#include <stdio.h>

int main() {
    int n, dvln = 0;

    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    for (; n > 0; n /= 10) {
        int dv = n % 10;      
        if (dv > dvln) {  
            dvln = dv;
        }
    }

    printf("Chu so lon nhat la: %d\n", dvln);

}

