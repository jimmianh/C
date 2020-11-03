#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1;
	int num2;
	int i;
	printf(" Nhap so dau: %d \n", num1);
	scanf("%d", &num1);
	printf(" Nhap so cuoi:%d \n" , num2);
	scanf("%d", &num2);
	for (i= num2; i<= num1; i++)
		if (i % 2 !=0 )
		printf(" Ket qua la:%d\n",i);
	return 0;
}
