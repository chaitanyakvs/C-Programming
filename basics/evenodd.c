/*#include<stdio.h>
int main(void)
{
int x;
printf("enter the number:/n");
scanf("%d", &x);
if(x%2==0)

printf("the number is even:/n");
else
printf("the number is odd: /n");
return 0;

}*/

#include<stdio.h>

int main()
{
int n;
printf("enter the number\n:");
scanf("%d",&n);
if(n & 1 == 1)
printf("odd");
else
printf("even");
return 0;
}
