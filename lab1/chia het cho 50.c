#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1;
	int num2;
	int i;
	printf(" Nhap so thu nhat:\n", num1);
	scanf("%d", &num1);
	printf(" Nhap so thu hai:\n", num2);
	scanf("%d", &num2);
	for ( i = num1; i <= num2; i++)
		if ( i % 50 == 0)
		printf(" so chia het cho 50 la: %d\n", i);
	return 0;
}
