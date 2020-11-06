#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	int num1;
	int num2;
	int choose;
	int tong;
	int hieu;
	int tich;
	int thuong;
	printf("Nhap so thu nhat:");
	scanf("%d", &num1);
	printf("Nhap so thu hai");
	scanf("%d", &num2);
	printf(" Chon chuc nang: \n1:Tong\t2:Hieu\n3:Tich\t4:Thuong\n");
	scanf("%d", &choose);
	switch(choose){
		case 1:
			tong = num1 + num2;
			printf(" Tong hai so la:%d", tong);
			return tong;
			break;
		case 2:
			hieu = num1 - num2;
			printf(" Hieu hai so la:%d", hieu);
			return hieu;
			break;
		case 3:
			tich = num1 * num2;
			printf("tich hai so la:%d", tich);
			return tich;
			break;
		case 4:
			thuong = num1 / num2;
			printf(" Thuong cua hai so la:%d", thuong);
			return thuong;
			break;
	}
}
