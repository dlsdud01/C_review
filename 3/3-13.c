#include <stdio.h>
int main(void)
{
  int a, b, c, max;

  puts("정수 세 개를 입력해 주세요.");
  printf("정수 A: ");   scanf("%d", &a);
  printf("정수 B: ");   scanf("%d", &b);
  printf("정수 C: ");   scanf("%d", &c);

  max = a;

  if (b>max) max = b;
  if (c>max) max = c;

  printf("최댓값 %d입니다.\n", max);
  return 0;
}