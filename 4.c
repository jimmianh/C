#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char  student[5][150];
    int i;
    printf("Nhap ten hoc sinh vao bang danh sach sau:\n");
    for (i=0; i<5; i++) {
        printf("\nTen hoc sinh so %d la:", i+1);
        scanf("%s",student[i]);
    }
    for (i=0; i<5; i++) {
        printf("\n Hoc sinh so %d la %s", i+1, student[i]);
    }
    printf("\n");
}
