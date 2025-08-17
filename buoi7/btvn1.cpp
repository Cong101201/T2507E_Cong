#include <stdio.h>

int main(){
	int n;
	printf("nhap tong chu so : ");
	scanf("%d",&n);
	
	int player[n];
	int tong = 0, dem = 0;
	float tbc;
	
    for (int i = 0; i < n; i++) {
        scanf("%d", &player[i]);
        if (player[i] % 2 != 0) { 
            tong += player[i];
            dem++;
        }
    }
    if (dem > 0) {
        tbc = (float)tong / dem;
        printf("%.2f\n", tbc);
    } else {
        printf("Khong co so le\n");
    }
}






