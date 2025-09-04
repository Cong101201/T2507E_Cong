#include <stdio.h>

int main() {
    float thunhap, thue, thunhaptinhthue;
    printf("Thu nhap ca nhan cua ban la:\n");
    scanf("%f", &thunhap);

    if (thunhap <= 11000000) {
        printf("Khong phai tinh thue\n");
    } else {
        thunhaptinhthue = thunhap - 11000000;

        if (thunhaptinhthue <= 5000000) {
            thue = thunhaptinhthue * 0.05;
            printf("Thue ban phai tra la: %.0f VND\n", thue);
        } else {
            if (thunhaptinhthue <= 10000000) {
                thue = 5000000 * 0.05 + (thunhaptinhthue - 5000000) * 0.10;
                printf("Thue ban phai tra la: %.0f VND\n", thue);
            } else {
                if (thunhaptinhthue <= 18000000) {
                    thue = 5000000 * 0.05 + 5000000 * 0.10
                         + (thunhaptinhthue - 10000000) * 0.15;
                    printf("Thue ban phai tra la: %.0f VND\n", thue);
                } else {
                    if (thunhaptinhthue <= 32000000) {
                        thue = 5000000 * 0.05 + 5000000 * 0.10 + 8000000 * 0.15
                             + (thunhaptinhthue - 18000000) * 0.20;
                        printf("Thue ban phai tra la: %.0f VND\n", thue);
                    } else {
                        if (thunhaptinhthue <= 52000000) {
                            thue = 5000000 * 0.05 + 5000000 * 0.10 + 8000000 * 0.15 
                                 + 14000000 * 0.20 + (thunhaptinhthue - 32000000) * 0.25;
                            printf("Thue ban phai tra la: %.0f VND\n", thue);
                        } else {
                            if (thunhaptinhthue <= 80000000) {
                                thue = 5000000 * 0.05 + 5000000 * 0.10 + 8000000 * 0.15 
                                     + 14000000 * 0.20 + 20000000 * 0.25
                                     + (thunhaptinhthue - 52000000) * 0.30;
                                printf("Thue ban phai tra la: %.0f VND\n", thue);
                            } else {
                                thue = 5000000 * 0.05 + 5000000 * 0.10 + 8000000 * 0.15 
                                     + 14000000 * 0.20 + 20000000 * 0.25 + 28000000 * 0.30
                                     + (thunhaptinhthue - 80000000) * 0.35;
                                printf("Thue ban phai tra la: %.0f VND\n", thue);
                            }
                        }
                    }
                }
            }
        }
    }
}
