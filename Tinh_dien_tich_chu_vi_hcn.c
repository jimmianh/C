#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float chieu_rong;
	float chieu_dai;
	float dien_tich;
	float chu_vi;
	int choose;
	printf(" Nhap chieu dai:");
	scanf("%f", &chieu_dai);
	printf(" Nhap chieu rong:");
	scanf("%f", &chieu_rong);
	printf("chon chuc nang tinh: \n1:dientich \t 2:chuvi\n");
	scanf("%d", &choose);
	switch( choose){
		case 1:
	 		dien_tich = chieu_dai * chieu_rong;
	 		printf(" Dien tich hinh chu nhat la:%f", dien_tich);
	 		return dien_tich;
	 		break;
	 	case 2:
	 		chu_vi = (chieu_dai + chieu_rong) * 2;
	 		printf(" chu vi hinh chu nhat la:%f", chu_vi);
	 		return chu_vi;
	 		break;
	} 		
}
