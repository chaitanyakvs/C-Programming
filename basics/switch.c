#include<stdio.h>

int main()

{

printf("\n\n\n\t switch statement application \n\n\n\t");

char grade;

printf("enter your grade\n");

scanf("%c", &grade);
switch(grade)

{

	case 'A':
		printf("excellent\n");
		break;
	case 'B':
		printf("avg\n");
		break;
	case 'c':
		printf("below avg\n");
		break;
default:
printf("invalid grade\n");
}
printf("your grade is:\n",grade);
return 0;
}

