#include <stdlib.h>
#include <assert.h>
#include <stdio.h>

int main() {

	int n = 10;
	int* a = malloc(n * sizeof(int));

	for(int i = 0; i < n; i++){
		a[i] = i;
	}


	int* p2;

	p2 = a + (n / 2); // becomes a new address 5 down

	*p2 = 0;

	printf("Value is %d \n", a[5]);
/*
	for(int i = 0; i < 10; i++)
		printf("Value is %d \n" , a[i]);
*/

}