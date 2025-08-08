#include <stdio.h>

int main() {
    int d, m, y;
    int songay = 0;
    int namNhuan = 0;

    printf("Nhap ngay: ");
    scanf("%d", &d);

    printf("Nhap thang: ");
    scanf("%d", &m);

    printf("Nhap nam: ");
    scanf("%d", &y);

    if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
        namNhuan = 1;
    }

    if (m < 1 || m > 12) {
        printf("Thang khong hop le.");
    } else {
        if (m == 1) {
            if (d >= 1 && d <= 31) {
                songay = d;
            } else {
                printf("Ngay khong hop le.");
            }
        } else if (m == 2) {
            if (namNhuan) {
                if (d >= 1 && d <= 29) {
                    songay = 31 + d;
                } else {
                    printf("Ngay khong hop le.");
                }
            } else {
                if (d >= 1 && d <= 28) {
                    songay = 31 + d;
                } else {
                    printf("Ngay khong hop le.");
                }
            }
        } else if (m == 3) {
            if (d >= 1 && d <= 31) {
                songay = 31 + (namNhuan ? 29 : 28) + d;
            } else {
                printf("Ngay khong hop le.");
            }
        } else if (m == 4) {
            if (d >= 1 && d <= 30) {
                songay = 31 + (namNhuan ? 29 : 28) + 31 + d;
            } else {
                printf("Ngay khong hop le.");
            }
        } else if (m == 5) {
            if (d >= 1 && d <= 31) {
                songay = 31 + (namNhuan ? 29 : 28) + 31 + 30 + d;
            } else {
                printf("Ngay khong hop le.");
            }
        } else if (m == 6) {
            if (d >= 1 && d <= 30) {
                songay = 31 + (namNhuan ? 29 : 28) + 31 + 30 + 31 + d;
            } else {
                printf("Ngay khong hop le.");
            }
        } else if (m == 7) {
            if (d >= 1 && d <= 31) {
                songay = 31 + (namNhuan ? 29 : 28) + 31 + 30 + 31 + 30 + d;
            } else {
                printf("Ngay khong hop le.");
            }
        } else if (m == 8) {
            if (d >= 1 && d <= 31) {
                songay = 31 + (namNhuan ? 29 : 28) + 31 + 30 + 31 + 30 + 31 + d;
            } else {
                printf("Ngay khong hop le.");
            }
        } else if (m == 9) {
            if (d >= 1 && d <= 30) {
                songay = 31 + (namNhuan ? 29 : 28) + 31 + 30 + 31 + 30 + 31 + 31 + d;
            } else {
                printf("Ngay khong hop le.");
            }
        } else if (m == 10) {
            if (d >= 1 && d <= 31) {
                songay = 31 + (namNhuan ? 29 : 28) + 31 + 30 + 31 + 30 + 31 + 31 + 30 + d;
            } else {
                printf("Ngay khong hop le.");
            }
        } else if (m == 11) {
            if (d >= 1 && d <= 30) {
                songay = 31 + (namNhuan ? 29 : 28) + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + d;
            } else {
                printf("Ngay khong hop le.");
            }
        } else if (m == 12) {
            if (d >= 1 && d <= 31) {
                songay = 31 + (namNhuan ? 29 : 28) + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + d;
            } else {
                printf("Ngay khong hop le.");
            }
        }

        printf("Day la ngay thu %d trong nam %d.\n", songay, y);
    }

    return 0;
}

