#include <stdio.h>

int main(void)
{
  double a, b;

  printf("정수 두 개를 입력해 주세요. \n");
  printf("정수 a : ");    scanf("%lf", &a);
  printf("정수 b : ");    scanf("%lf", &b);

  printf("이들의 평균은 %f 입니다.\n", (a+b)/2.0);

  return 0;
}