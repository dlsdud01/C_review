#include <stdio.h>

int main(void)
{
  int a, b;

  printf("정수 두 개를 입력해 주세요. \n");
  printf("정수 a : ");    scanf("%d", &a);
  printf("정수 b : ");    scanf("%d", &b);

  printf("a를 b로 나누면 몫은 %d, 나머지는 %d 입니다.\n", a/b, a%b);

  return 0;
}