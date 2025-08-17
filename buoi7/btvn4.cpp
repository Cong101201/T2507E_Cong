#include <stdio.h>

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int soLeCuoi = 0; 

    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] % 2 != 0) { 
            soLeCuoi = arr[i];
            break; 
        }
    }

    if (soLeCuoi > 0) {
        printf("So le cuoi cung cua mang la: %d\n", soLeCuoi);
    } else {
        printf("Mang khong co so le nao.\n");
    }
}

