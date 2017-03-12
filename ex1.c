#include <stdio.h>

int main()
{
	printf("hi");
	printf("heelo");
	return 0;
}

void add_element(int a[], int size)
{
	int i = 0;
	for(i = 0;i<size;i++)
		printf("%d\n", a[i]);
}