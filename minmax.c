#include <stdio.h>
void minmax(int a[],int size, int *min,int *max);
int main ()
{
	int a[] = {1,23,96,51,25,43,2,8,9,65,46,254,652,24,654,85};
	int min,max;
	minmax(a, sizeof(a) / sizeof(a[0]), &min, &max);
	printf("a[%d]中的最小值为%d,最大值为%d",sizeof(a) / sizeof(a[0]), min, max);
	
	return 0;
}

void minmax(int a[],int size,int *min, int *max)
{
	int i;
	*min = *max = a[0];
	for(i = 1;i < size; i++)
	{
		if(a[i] < *min)
			*min = a[i];
		if(a[i] > *max)
			*max = a[i];
	}
}
