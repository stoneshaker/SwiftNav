#include <stdio.h>

void main(void)
{
	char dummy;
	int j;
	for (
		j = 0; j < 101; j++) {
		if (!(j % 3)) {
			if (!(j % 5)) printf("Fizz and Buzz\n");
			else printf("Fizz\n");
		}
		else if (!(j % 5)) printf("Buzz\n");
		else printf("%d\n",j);
	}
	dummy = getchar();
}