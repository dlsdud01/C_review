#include <stdio.h>

int main(void)
{
  double n;

  printf("실수를 입력해주세요. : ");
  scanf("%lf", &n);

  printf("당신은 %f를 입력했습니다.\n", n);

  return 0;
}