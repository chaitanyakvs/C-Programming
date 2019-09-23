// How to understand the effect of passing an array to a function //

#include<stdio.h>
void func(int val[]);
int main(void)
{

int i, arr[6] = {1, 5, 8, 9, 6, 7};

func(arr);
printf("contents of the array are :");
for(i=0;i<=6;i++)
	printf("%d", arr[i]);
printf("\n");
return 0;
}

// Here we're writing the function //

void func(int val[])
{
	int sum=0, i;
	for(i=0; i<=6; i++)
	{
		val[i] = val[i]*val[i];
		sum += val[i];
	}
printf("sum of the squares is \n");

}
