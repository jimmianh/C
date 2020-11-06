#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main (){
	int num1;
	int num2;
	int tong;
	int hieu;
	int tich;
	int thuong;
	int choose;
	printf(" Nhap so thu nhat: ");
	scanf("%d", &num1 );
	printf(" Nhap so thu hai: ");
	scanf("%d", &num2 );
	printf("chon chuc nang tinh toan:\n 1:tong\n 2:hieu\n 3:tich\n4:thuong\n");
	scanf("%d", &choose);
	if( choose = 1){
		tong = num1 + num2;
		printf("%d", tong);
	} else if ( choose = 2 ){
		hieu = num1 - num2;
		printf("%d", hieu);	
	} else if (choose = 3){
		tich = num1 * num2;
		printf("%d", tich);
	} else if ( choose = 4){
		thuong = num1/num2;
		printf("%d", thuong);
	}	
}
