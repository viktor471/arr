#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

/*	int a = 9;
	char b = 'c';
	a++;
	a=a+2;
	printf("a: %d\n", a);
	printf("b: %c a: %d\n", b, a);
*/
/*
	// комментарий
	//
	int arr[5] = {1, 2, 4, 6, 7};
	
	int a = 0;
	float b = 2.5;
	printf("b %f \n", b);
	printf(" arr: %d %d %d %d %d \n", arr[0], arr[1], arr[2], arr[3], arr[4] );

	for( int i = 0; i < 10; i++)
	{
		a+=i;
		printf("i: %d a: %d \n", i, a); 
	}

	a = 1;
	b = 0;
	int c = 0;

	for( int i = 0; i < 100; i++ )
	{
		c = b;
		a = b + a;

	}

	int f = 2;
	int d = 6;

	for (int i = 4; i >  0; i-- )
	{
		a = ( (2 & ( 1 << i)) && 1);
		printf("%d ", a);
	}
	
*/

	int arr[10];

	srand(time(0));
	for (int i =0 ; i < 10; i++){
		arr[i] = rand()%100;
		printf(" arr[%d] : %d \n", i, arr[i]);
	}

	int *pointer = arr;
	
	for (int i =0 ; i < 10; i++ )
	{
		printf("%p arr[%d] %d \n", pointer++, i, arr[i]);
	}

	pointer = arr;	
	
	printf("\n");

	for (int i = 0 ; i < 10; i++ )
	{
		printf("%p arr[%d] %d \n", pointer, i, pointer[i]);
	}


}
