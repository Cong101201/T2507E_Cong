#include <stdio.h>

int main() {
    int n, x, timso = 0; 
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Nhap so can tim x: ");
    scanf("%d", &x);

    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            timso = 1; 
            break;     
        }
    }

    if (timso) {
        printf("Tim thay %d trong mang!\n", x);
    } else {
        printf("Khong tim thay %d trong mang.\n", x);
    }
}


