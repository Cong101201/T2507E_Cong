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

    int tong = 0;      
    int maxTong = 0; 

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {           
            tong += arr[i];       
            if (tong > maxTong) {  
                maxTong = tong;    
            }
        } else {                   
            tong = 0;             
        }
    }

    printf("Tong lon nhat cua chuoi so duong la: %d\n", maxTong);
}

