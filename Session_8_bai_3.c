#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	int b;
	printf(" Nhap so a:%d",a);
	scanf ("%d", &a);
	printf(" nhap so b:%d",b);
	scanf ("%d", &b);
	if ( (a*b)== 1000){
		printf(" tich hai so bang 1000");
	} else {
		printf(" Tich hai so lon hon 1000");
	}
	return 0;
}
