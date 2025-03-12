#include <stdio.h>

int main(void)
{
  double x, y;

  printf("정수 두 개를 입력해 주세요. \n");
  printf("정수 x : ");    scanf("%lf", &x);
  printf("정수 y : ");    scanf("%lf", &y);

  printf("x는 y의 %.2f%%입니다.\n", (x/y)*100);

  return 0;
}