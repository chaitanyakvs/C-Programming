#include<stdio.h>
#define SIZE 5

int main()

{

	int arr[SIZE] = {10, 20, 30, 40, 50};
 int *ptr;
 int count;
ptr = &arr[0];
count = 0;

printf("Accessing the elements in the array is \n ");
while(count < SIZE)
{
	printf("arr[%d] = %d\n", count, *ptr);

	ptr++;

	count++;

}
return 0;

}
