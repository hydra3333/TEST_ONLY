#include <stdio.h>
#include "shared.h"
unsigned int foo(unsigned int a) { return a + 99; }
int main(void)
{
  int result = foo(1);
  printf("%d\n", result);
  result = bar(1);
  printf("%d\n", result);
  return 0;
}
