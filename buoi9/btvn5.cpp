#include <stdio.h>

int daoNguoc(int n) {
    int soDao = 0;      
    while (n != 0) {
        int du = n % 10;           
        soDao = soDao * 10 + du;   
        n = n / 10;                
    }
    return soDao;
}

int main() {
    int n;
    printf("Nhap so nguyen: ");
    scanf("%d", &n);

    int ketQua = daoNguoc(n);
    printf("So dao nguoc cua %d la: %d\n", n, ketQua);

    return 0;
}

