#include <stdio.h>
#include<stdlib.h>

int cubeGuValue(int n);

int main() 
{
	int number = 5;
	printf("The original value of number is %d", number);

	number= cubeGuValue(number);

	printf("\nThe new value of number is %d\n", number);
	system("pause");
	return 0;
}

int cubeGuValue(int n) 
{
	return n * n * n;
}