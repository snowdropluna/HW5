#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int recursiveMaximum(int array[], int size);

int main(void)
{
	int a[5];
	int i;
	printf("�п�J���Ӿ�ơA�N��j�p:");
	scanf_s("%d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4]);


	printf("�̤j�Ƭ�:%d\n", recursiveMaximum(a, SIZE - 1));
	system("pause");
	return 0;
}

int recursiveMaximum(int array[], int size)
{
	if (size == 1)
	{
		if (array[1] > array[0])
		{
			return array[1];
		}
		else
		{
			return array[0];
		}
	}
	else {
		if (array[size] > recursiveMaximum(array, size - 1))
		{
			return array[size];
		}
		else
		{
			return recursiveMaximum(array, size - 1);
		}
	}
}