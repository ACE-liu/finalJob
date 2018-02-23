#include <stdio.h>
#include <stdlib.h>

int func(int n)
{
	int sum, tmp;
	for (tmp= 0; tmp < n; tmp++)
	{
		sum += tmp;
	}
	return sum;
}

int main()
{
	int i;
	long result = 0;
	for (i = 0; i < 100; i++)
	{
		result += i;
	}
	printf("add 0 -100 result=%ld\n", result);
	printf("result[0-250]= %d\n", func(250));
        system("pause");
}