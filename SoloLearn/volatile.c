#include <stdio.h>
int main(int argc, char **argv) {
	const int A = 1;
	int *ptrA = (int *) &A;
	printf("print 1st, non-Volatile is : %d\n", A);
	*ptrA = 10;
	printf("print 1st, non-Volatile is : %d\n", A);
	
	volatile const int B = 9;
	int *ptrB = (int *) &B;
	printf("print 1st, Volatile is : %d\n", B);
	*ptrB = 90;
	printf("print 1st, Volatile is : %d\n", B);
	
	return 0;
}