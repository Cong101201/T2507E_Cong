#include <stdio.h>

int main() {
    int n, i = 1, dem = 0;

    printf("Nhap mot so nguyen n: ");
    scanf("%d", &n);

    while (i <= n) {
        if (n % i == 0) { 
            dem++;        
        }
        i++;
    }

    if (dem == 2) { 
        printf("%d la so nguyen to.\n", n);
    } else {
        printf("%d khong phai so nguyen to.\n", n);
    }

}

