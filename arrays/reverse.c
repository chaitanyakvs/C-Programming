#include<stdio.h>
int main(void)
{

	int i, j, temp, arr[10] = {1,5,2,3,4,9,8,6,9,2};

	for(i=0, j=9; i<j; i++, j--)

	{
		
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	
	}

	printf("Reversing the array is :");
	for(i=0;i<10;i++)
	printf("%d",arr[i]);
	printf("\n");
	return 0;

}
