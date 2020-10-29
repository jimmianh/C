#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1;
	int num2;
	int i;
	int tong = 0;
	printf(" Nhap so dau tien: ");
	scanf("%d", &num1);
	printf(" Nhap so thu hai: ");
	scanf("%d", &num2);
	for ( i = num1; i <= num2 ; i++ ) {
		if (i % 2 != 0) {
			printf(" ket qua la: %d\n", i);
			tong = tong + i;
		}
	}
	printf(" Tong cuoi cung la: %d", tong);
	return 0;
}
