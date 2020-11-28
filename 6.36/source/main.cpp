#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void stringReverse(char array[],int lo,int hi);

int main()
{
	char string1[100];
	int len;
	printf("½Ð¿é¤J¤@¦r¦ê:");
	scanf("%s", string1);

	printf("string is : %s\n", string1);
	
	
	printf("stringReverse is:");
	len = strlen(string1);
	stringReverse(string1, 0, len -1);

	printf("\n");

	system("pause");
	return 0;
}
void stringReverse(char array[], int lo, int hi)
{
	char *string = array;
	char temp;

	if (hi == (lo + 1)) 
	{
		temp = string[lo];
		string[lo] = string[hi];
		string[hi] = temp;
		printf("%s", string);
	}
	else if (hi == lo) 
	{
		printf("%s", string);
	}
	else 
	{
		temp = string[lo];
		string[lo] = string[hi];
		string[hi] = temp;
		
		stringReverse(array, lo+1 , hi-1);
		//stringReverse(array, ++lo , --hi);
	}
	
}