#include <stdio.h>

int main() {
    int n, i, j, so, laNguyenTo;
    int coNguyenTo = 0; 

    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    int a[100]; 

    for (i = 0; i < n; i++) {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("Cac so nguyen to trong mang: ");
    for (i = 0; i < n; i++) {
        so = a[i];
        if (so < 2) {
            continue; 
        }

        laNguyenTo = 1; 
        for (j = 2; j * j <= so; j++) {
            if (so % j == 0) {
                laNguyenTo = 0; 
                break;
            }
        }

        if (laNguyenTo == 1) {
            printf("%d ", so);
            coNguyenTo = 1;
        }
    }

    if (coNguyenTo == 0) {
        printf("No prime number");
    }
}

