#include <stdio.h>      /* printf */
#include <math.h>       /* isnormal */
#include <conio.h>

int main() {
	printf("isnormal(1.0)    : %d\n", isnormal(1.0));
	printf("isnormal(0.0)    : %d\n", isnormal(0.0));
	printf("isnormal(1.0/2.0): %d\n", isnormal(1.0 / 2.0));

	_getch();
	return 0;
}