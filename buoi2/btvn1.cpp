#include <stdio.h>

int main() {
    int kWh;
    float tien;

    printf("Nhap so kWh tieu thu:\n");
    scanf("%d", &kWh);
    
    if (kWh <= 50) {
            tien = kWh * 1678;
            printf("Tien dien la: %f VND", tien);
        }else{
            if (kWh <= 100) {
                tien = 50 * 1678 + (kWh - 50) * 1734;
                printf("Tien dien la: %f VND", tien);
            }else{
                if (kWh <= 200) {
                    tien = 50 * 1678 + 50 * 1734 + (kWh - 100) * 2014;
                    printf("Tien dien la: %f VND", tien);
                }else{
                    tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + (kWh - 200) * 2536;
                    printf("Tien dien la: %f VND", tien);
                }
            }
        }
    }
