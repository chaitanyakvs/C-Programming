// Bitwise operators sample program //

#include <stdio.h>
int main()
{
  int a = 20, b = 21, c = 0;
  c = a&b;
  printf("AND -- value of c is %d\n", c);
  c = a | b;
  printf("OR -- value of c is %d\n", c);
  c = a ^ b;
  printf("Exclusive OR -- value of c is %d\n", c);

  return();
}
