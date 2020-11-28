#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
	int dice1, dice2,total;
	long long int count[11],i;

	srand(time(0));

	for (i = 0; i < 11; i++)
		count[i] = 0;

	for (i = 0; i < 36000; i++) 
	{
		dice1 = rand() % 6 + 1;
		dice2 = rand() % 6 + 1;
		total = dice1 + dice2;
		count[total-2]++;
	}


	printf("�Y��l36000���A�������l�I�ƪ��`�M�X�{����\n");
	printf("����`�M");
	for (i = 2; i < 13; i++) 
	{
		printf("%9d", i);
	}
	printf("\n�X�{����");
	for (i = 0; i < 11; i++) 
	{
		printf("%9d", count[i]);
	}

	printf("\n");

	system("pause");
	return 0;
}