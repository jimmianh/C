#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char name[150];
	int chieu_cao;
		printf("Nhap ten nguoi yeu:");
		scanf("%s", name);
		printf("\nNhap chieu cao:");
		scanf("%d", &chieu_cao);
		if( chieu_cao < 150 || chieu_cao >=200){
			printf("Thap vl");
		} 
}

