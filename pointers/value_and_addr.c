#include<stdio.h>
int main(void)
{
int arr[5]={1,2,3,4,5};
int i;
	for(i=0;i<5;i++)
	{
//		printf("The value of array is arr[%d]=%d\t ", i, arr[i]);
//		printf("The address of elements in an array arr[%d]= %p\n", i, &arr[i]);
		 printf("The value of array is arr[%d]=%d\t ", i,*( arr+i));
	              printf("The address of elements in an array arr[%d]= %p\n", i, (arr+i));

	}
return 0;
}


