#include <stdio.h>


int luyThua(int x, int y) {
    int result = 1;   
    for (int i = 1; i <= y; i++) {
        result = result * x;  
    }
    return result;
}

int main() {
    int x, y;
    printf("Nhap so x: ");
    scanf("%d", &x);
    printf("Nhap so y: ");
    scanf("%d", &y);

    int S = luyThua(x, y); 
    printf("%d^%d = %d\n", x, y, S);

    return 0;
}

