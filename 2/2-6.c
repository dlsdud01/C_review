#include <stdio.h>

int main(void)
{
  int n;
  double x;

  n = 9.99;
  x = 9.99;

  printf("int형 변수 n의 값 : %d\n", n);
  printf("int형 변수  n / 2 : %d\n", n/2);

  printf("double형 변수 x의 값 : %f\n", x);
  printf("double형 변수 x / 2.0 : %f\n", x/2.0);

  return 0;
}