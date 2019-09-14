// program to input and print array elements using pointer //

#include<stdio.h>

#define MAX_SIZE 100

int main()
{
int arr[MAX_SIZE];
int n, i;
int *ptr = arr;
printf("Enter the size of array :\n");
scanf("%d",&n);

printf("enter elements in array \n");
for(i=0;i<n;i++)
{
scanf("%d", ptr);
ptr++;
}
ptr = arr;

printf("Array elements arev :\n");
for(i=0;i<n;i++)
{
printf("%d",*ptr);
ptr++;
}
return 0;
}
