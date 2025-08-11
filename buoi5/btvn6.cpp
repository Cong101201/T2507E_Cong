#include <stdio.h>

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    int a = 0, b = 1, i = 2, fib;

    if (n == 0) {
        printf("F%d = 0", n);
    } else if (n == 1) {
        printf("F%d = 1", n);
    } else {
        while (i <= n) {
            fib = a + b;  
            a = b;        
            b = fib;      
            i++;
        }
        printf("F%d = %d", n, fib);
    }

}

