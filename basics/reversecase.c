#include<stdio.h>
#include<ctype.h>

int main()

{

	printf("\n\n\n\t Reverse case from lower to upper or vice-versa \n\n\n\t:");

char alphabet;
printf("enter an alphabet:");
putchar('\n');

alphabet = getchar();

printf("\n Reverse case of %c is :", alphabet);

if(islower(alphabet))
	putchar(toupper(alphabet));
else
	printf("%c",tolower(alphabet));

return 0;
}
