#include <stdio.h>

int UCLN(int a, int b) {

    while (b != 0) {
        int r = a % b; 
        a = b;
        b = r;
    }
    return a;
}

int main() {
    int x, y;
    printf("Nhap 2 so nguyen: ");
    scanf("%d %d", &x, &y);

    printf("UCLN cua %d va %d la: %d\n", x, y, UCLN(x, y));

    return 0;
}

