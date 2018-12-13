#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

void modifyArray(int b[], int size);
void modifyElement(int e);
//將陣列傳送給函數做運算
int main(void)
{
	int a[SIZE] = { 0, 1, 2, 3, 4 };
	int i;

	printf("Effects of passing entire array by reference:\n\n"
		"Thevalues of the original array are:\n");

	for (i = 0; i < SIZE; i++)
	{
		printf("%3d", a[i]);
	}

	
	

	printf("\n\n\nEffects of passing array element:\n"
		"\nThe values of the modified array are:\n");
	for (i = 0; i < SIZE; i++)
		{
			printf("%3d", a[i]);
		}

	printf("\n\nThe maximum of a is %d\n\n", a[4]);

	system("pause");
	return 0;
}
