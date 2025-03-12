#include <stdio.h>

int main(void)
{
  int n;
  double ave;

  printf("키를 입력해 주세요: ");
  scanf("%d", &n);

  ave = (double)(n-100)*0.9;

  printf("표준 몸무게는 %.1f 입니다.\n", ave);

  return 0;
}