#include <stdio.h> 	// allows use of printf and scanf functions

int main() {
	int x, t = 5;		// declare variables, t is also initialized

	printf("Enter a value for t: ");
	scanf("%d", &t);

	x = t*t + 3*t + 7;	// expression evaluates "x"

	printf("The value of x is %d", x);	/* print result */
	printf("\n");

	return 0;
}		// End main()
