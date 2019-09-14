#include<stdio.h>
void cyclicSwap(int *a, int *b, int *c);

int main()
{
	int a, b, c;
	printf("Enter the elements of a and b and c :");
	scanf("%d%d%d", &a, &b, &c);
printf("Values before swapping :");
printf("a = %d\n, b = %d\n, c = %d\n", a, b, c);

cyclicSwap(&a, &b, &c);
printf("value after swapping :\n");
printf("a = %d\n, b = %d\n, c = %d\n", a, b, c);
return 0;
}
void cyclicSwap(int *a, int *b, int *c)
{
	int temp;
temp = *b;
	*b = *a;
	*a = *c;
	*c = temp;
}
