#include <stdio.h>

void main(void)
{
	char dummy;
	int j;
	for (j = 0; j < 101; j++) {  // cycle through 0 to 100
		if (!(j % 3)) { // check if index is divisible by 3
			if (!(j % 5)) printf("Fizz and Buzz\n"); // check if index is also divisible by 5
			else printf("Fizz\n"); // case only divisible by 3
		}
		else if (!(j % 5)) printf("Buzz\n"); // check if index is divisible by 5
		else printf("%d\n",j); // default case - print index
	}
	dummy = getchar();  // pause before exiting (for Windows)
}