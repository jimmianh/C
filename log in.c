#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf(" wellcome to vietcombank");
	int a;
	int b;
	int c=1;
	int d=2;
	int e=3;
	int f=4;
	printf (" enter your card id %d ", a );
	scanf ("%d", &a);
	if (a== 1234)
	{ 
	printf("Enter your pin %d", b);
	scanf ("%d", &b);
	if (b==4321)
	{
		printf (" chon 1 trong 4\n 1.rut tien\n 2. chuyen tien\n 3.doi pass\n 4. het tien");
		scanf ("%d",&c);
		printf("tien ban het roi khong rut duoc");
		scanf ("%d",&d);
		printf("ban het tien roi khong chuyen duoc");
		scanf ("%d",&e);
		printf(" nhap pass cu ");	
    }
    else 
    printf (" ma pin cua ban sai me roi");
	}
    else 
    printf (" ma the khong dung");
    
	
	return 0;
}
