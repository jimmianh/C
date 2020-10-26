#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf ("the number 555 is various forms:\n");
	printf ("without any modifier: \n");
	printf ("[%d]\n",555);
	printf ("wiht - modifier:\n");
	printf ("[%-d]\n",555);
	printf ("wiht digit string 10 as modifier:\n");
	printf ("[%10d]\n",555);
	printf ("with 0 as modifier:\n");
	printf ("[%0d]\n",555);
	printf ("wiht 0 digit string 10 as modifier:\n");
	printf ("[%010d]\n",555);
	printf ("wiht -, 0 and digit string 10 as modifier:\n");
	printf ("[%-010d]\n",555);
	return 0;
}
