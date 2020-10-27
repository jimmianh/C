#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	printf(" Nhap x:%d\n ",x);
	scanf("%d", &x); 
	if ( x <= 3000 && 2000 <= x ){
	printf(" So x la: %d",x);
} else {
	printf(" x khong thoa man\n");
}
	int y;
	printf("Nhap y:%d\n",y);
	scanf("%d", &y);
	if (100 <= y && y <= 500){
	printf(" So y la:%d",y);
} else {
	printf(" So y khong thoa man ");
}
	return 0;
}
