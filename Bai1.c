
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int ma_pin;
	int chon;
	int so_du = 200;
	printf(" wellcome to vietcombank !\n");
	printf("- Nhap ma pin: ");
	scanf("%d", &ma_pin);
	if (ma_pin == 4321) {
		int chon;
		printf("1. Rut tien\n2. Chuyen tien\n3. Check\n4. Exit\n");
		printf(" Chon: ");
		scanf("%d", &chon);
		if(chon == 1){
			printf(" Nhap so tien rut\n ");
			int so_tien_rut;
			scanf("%d", &so_tien_rut);
			if ( so_tien_rut <= (so_du - 5)){
				so_du = so_du - so_tien_rut - 5;
		 		printf("So du con lai la: %d", so_du);
			} else {
				printf(" So du khong du ");
			}	
		} else if ( chon == 2){
			printf("Nhap so tai khoan can chuyen toi\n");
			int so_tai_khoan;
			scanf("%d", &so_tai_khoan);
			printf(" Nhap so tien chuyen\n ");
			int so_tien_chuyen;
			scanf("%d", &so_tien_chuyen);
			if (so_tien_chuyen <= so_du){
				so_du = so_du - so_tien_chuyen;
				printf("Tai khoan da nhan duoc tien\nSo du con lai la: %d", so_du);
			} else {
				printf(" So du khong du ");
			}
		} else if ( chon == 3){
			printf(" So du con lai la: %d ", so_du);
		} else if ( chon == 4){
		} 
			printf(" thank you!!");
	} else {
		printf(" Sai ma pin ");
		
	}
	
	return 0;
}
