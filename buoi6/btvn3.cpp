#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    for (; n > 0; n /= 10) {
        sum += n % 10; 
    }

    printf("Tong cac chu so la: %d\n", sum);
}

