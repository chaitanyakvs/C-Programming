#include<stdio.h>
int main()
{
	int a;
	printf("WELCOME TO THE VOTING \n");
	printf("please enter the age: \n");
	scanf("%d", &a);

	if(a<18)
	{
		printf("not eligible for voting \n");
	}else
	{
printf("eligible for voting\n");
}

return 0;
}
