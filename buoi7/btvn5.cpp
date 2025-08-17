#include <stdio.h>

int main() {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    int arr[n];
    int minDuong = -1; 

    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i);
        scanf("%d", &arr[i]);

        if (arr[i] > 0) { 
            if (minDuong == -1 || arr[i] < minDuong) {
                minDuong = arr[i]; 
            }
        }
    }

    if (minDuong != -1) {
        printf("So duong nho nhat trong mang la: %d\n", minDuong);
    } else {
        printf("Mang khong co so duong.\n");
    }
}

