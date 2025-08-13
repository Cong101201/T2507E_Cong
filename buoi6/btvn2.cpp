#include <stdio.h>

int main() {
    int a, b, i, ucln, bcnn;

    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);

    for (i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            ucln = i;
        }
    }

    bcnn = (a * b) / ucln;

    printf("UCLN = %d\n", ucln);
    printf("BCNN = %d\n", bcnn);

}

