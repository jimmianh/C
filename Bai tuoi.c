#include <stdio.h>
int main()
{
	char name[3];
	int age;
	int i;
	printf(" Nhap tien la:");
	scanf("%s", name);
	printf("Nhap tuoi:");
	scanf("%d", &age);
	for (i=0;i<age; i++)
	printf(" Chao:%s");
	return 0;
}
