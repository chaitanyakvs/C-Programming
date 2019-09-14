// call by reference by swapping problem //

#include<stdio.h>
void swap(int *x, int *y);
int main(void)
{

int a = 10, b =20;
printf("Before swap:\t %d\t%d\t:", a, b);
swap(&a, &b); //call by reference or call by address
printf("After swap:\t %d\t%d\t", a, b);
}

void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;

printf("After swap\t: %d\t, %d\t", *x, *y);
return 0;
}
