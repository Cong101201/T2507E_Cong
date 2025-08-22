#include <stdio.h>

int tongChuSo(int n) {
    int sum = 0;
    while (n > 0) {
        int du = n % 10;   
        sum = sum + du;    
        n = n / 10;        
    }
    return sum;
}

int main() {
    int n;
    printf("Nhap so nguyen duong: ");
    scanf("%d", &n);

    printf("Tong cac chu so cua %d la: %d\n", n, tongChuSo(n));

    return 0;
}

