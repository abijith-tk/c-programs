#include <stdio.h>
/*
Create a pyramid of numbers
 1
 2 3
 4 5 6
 7 8 9 10
*/
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
			printf("%d ", j);
		printf("\n");
	}
	return 0;
}
