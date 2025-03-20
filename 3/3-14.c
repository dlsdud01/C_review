#include <stdio.h>
int main(void)
{
  int a, b, max;

  puts("정수 두 개를 입력해 주세요.");
  printf("정수 A: ");   scanf("%d", &a);
  printf("정수 B: ");   scanf("%d", &b);

  max = (a > b) ? a : b;

  printf("큰 쪽의 값은 %d 입니다.\n", max);
  return 0;
}