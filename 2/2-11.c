#include <stdio.h>

int main(void)
{
  int a, b, c;
  int sum;
  double ave;

  printf("정수 세 개를 입력해 주세요. \n");
  printf("정수 a : ");    scanf("%d", &a);
  printf("정수 b : ");    scanf("%d", &b);
  printf("정수 c : ");    scanf("%d", &c);

  sum = a+b+c;
  ave = (double) sum / 3;

  printf("이들의 합은 %5d입니다.\n", sum);
  printf("이들의 평균은 %5.1f입니다.\n", ave);

  return 0;
}