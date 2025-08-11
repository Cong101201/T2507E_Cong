#include <stdio.h>

int main() {
    int n, sum = 0, i = 1;

    printf("Nhap mot so nguyen duong n: ");
    scanf("%d", &n);
    

    while (i < n) { 
        if (n % i == 0) {
            sum += i;
        }
        i++;
    }

    if (sum == n) {
        printf("%d la so hoan hao.\n", n);
    } else {
        printf("%d khong phai so hoan hao.\n", n);
    }

}

