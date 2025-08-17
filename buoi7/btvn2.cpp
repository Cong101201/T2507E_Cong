#include <stdio.h>

int main() {
    int n, tong = 0, soluong = 0;
    printf("Nhap so luong: ");
    scanf("%d", &n);

    int player[n];

    for (int i = 0; i < n; i++) {
        printf("Nhap so thu %d: ", i);
        scanf("%d", &player[i]);

        if (i % 2 == 0 && player[i] % 2 != 0) {
            tong += player[i];
            soluong++;
        }
    }

    if (soluong > 0) {
        printf("Trung binh cong = %.2f\n", (float)tong / soluong);
    } else {
        printf("Khong co so le o vi tri chan\n");
    }

    return 0;
}

