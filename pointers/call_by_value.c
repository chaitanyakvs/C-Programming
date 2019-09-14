#include<stdio.h>
int main(void)

{

int  a= 10, b = 20;
printf("before swapping\t, %d\t, %d\t", a, b);
swap(a, b);
}
//swapping logic//

void swap(int x, int y)
{
int temp = x;
x = y;
y = temp;
printf("After swap\t, %d\t, %d\t", x, y);

return 0;

}
