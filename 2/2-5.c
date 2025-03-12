#include <stdio.h>

int main(void)
{
  int a, b;

  printf("정수 두 개를 입력해 주세요. \n");
  printf("정수 a : ");    scanf("%d", &a);
  printf("정수 b : ");    scanf("%d", &b);

  printf("이들의 평균은 %d 입니다.\n", (a+b)/2);

  return 0;
}