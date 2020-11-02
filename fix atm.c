#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf(" wellcome to NgocAnhbank\n");
	int ma_the;
	int ma_pin;
	int rut_tien;
	int chuyen_tien;
	int doi_pass;
	int ket_thuc;
	printf (" enter your card id %d ", ma_the );
	scanf ("%d", &ma_the);
	if (ma_the== 1234)
	{ 
	printf("Enter your pin %d", ma_pin);
	scanf ("%d", &ma_pin);
	if (ma_pin==4321)
	{
		printf (" chon 1 trong 4\n 1.rut tien\n 2. chuyen tien\n 3.doi pass\n 4. ket thuc ");
		scanf ("%d",&choose);
		printf ("choose");
		if(choose == 1)
		{
			printf("tien ban het roi khong rut duoc");
	    }
		else if(choose==2)
		{
			printf("ban het tien roi khong chuyen duoc");
	    }
		else if(choose==3)
        { 
			printf(" nhap pass cu ");
			scanf ("%d", &pass_cu);
			if ( pass_cu == 4321)
	 	}
	 	else if (choose==4)
	    {
	    	printf(" cam on quy khach!!");
	    }
	    else 
	    {
	    	printf(" no data");
		}
		
		
		
		if (ma_the== 1234)
		{
			printf (" nhap pass moi ");
	    }
		else
			printf (" sai roi");
	    }
	    else 
		    printf(" no data3");
		    scanf ("%d",&ket_thuc);
    }
    else 
    printf (" ma pin cua ban sai");
	}
    else 
    printf (" ma the khong dung");
	return 0;
	return 0;
}
