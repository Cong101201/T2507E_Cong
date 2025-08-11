#include <stdio.h>

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);   

    int a = 0, b = 1;  

    while (b < n) {
        int fib = a + b;  
        a = b;            
        b = fib;          
    }
    printf("So tiem can duoi Fibonacci: %d\n", a);
}

