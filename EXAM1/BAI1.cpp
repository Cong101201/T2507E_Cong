#include <stdio.h>

int main() {
    int n1, n2, i, j, co = 0;
    char S1[100], S2[100];

    printf("Nhap do dai chuoi 1: ");
    scanf("%d", &n1);
    printf("Nhap chuoi 1 (tung ky tu):\n");
    for (i = 0; i < n1; i++) {
        scanf(" %c", &S1[i]); 
    }

    printf("Nhap do dai chuoi 2: ");
    scanf("%d", &n2);
    printf("Nhap chuoi 2 (tung ky tu):\n");
    for (i = 0; i < n2; i++) {
        scanf(" %c", &S2[i]);  
    }

    if (n1 < n2) {
        int tam = n1; n1 = n2; n2 = tam;
        for (i = 0; i < n1; i++) {
            char c = S1[i];
            S1[i] = S2[i];
            S2[i] = c;
        }
    }

    for (i = 0; i <= n1 - n2; i++) {
        int giong = 1;
        for (j = 0; j < n2; j++) {
            if (S1[i + j] != S2[j]) {
                giong = 0;
                break;
            }
        }
        if (giong == 1) {
            co = 1;
            break;
        }
    }

    if (co == 1) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
}


