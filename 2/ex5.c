#include <stdio.h>

int main(void)
{
  double a, b;

  printf("정수 두 개를 입력해 주세요. \n");
  printf("정수 a : ");    scanf("%lf", &a);
  printf("정수 b : ");    scanf("%lf", &b);

  printf("a의 값은 b의 %f%%입니다.\n", a/b*100);

  return 0;
}