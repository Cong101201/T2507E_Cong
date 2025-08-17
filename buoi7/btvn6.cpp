#include <stdio.h>

int main() {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i);
        scanf("%d", &arr[i]);
    }

    int dem = 0, max = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            dem++;               
            if (dem > max) {
                max = dem;      
            }
        } else {
            dem = 0;            
        }
    }
    printf("So luong so duong lien tiep nhieu nhat la: %d\n", max);
}

