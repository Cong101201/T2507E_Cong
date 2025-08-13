#include <stdio.h>

int main() {
    int n;
    int toanChuSoLe = 1; 

    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    for (; n > 0; n /= 10) {
        int digit = n % 10; 
        if (digit % 2 == 0) { 
            toanChuSoLe = 0;
        }
    }

    if (toanChuSoLe) {
        printf("n co toan chu so le\n");
    } else {
        printf("n khong toan chu so le\n");
    }


}
