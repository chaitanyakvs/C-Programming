// read & print elements of an array //

#include<stdio.h>
int main(void)
{
	int arr[10];
	int i;
for(i=0;i<10;i++){
printf("Enter the 10 elements in the array:\n");
scanf("%d", &arr[i]);
}
printf("the elements in the array :\n");
for(i=0;i<10;i++){
printf("%d",arr[i]);
}
printf("\n");
return 0;

}
