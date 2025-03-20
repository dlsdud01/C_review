#include <stdio.h>
int main(void)
{
  int a, b, c, d, max;

  puts("정수 네 개를 입력해 주세요.");
  printf("정수 A: ");   scanf("%d", &a);
  printf("정수 B: ");   scanf("%d", &b);
  printf("정수 C: ");   scanf("%d", &c);
  printf("정수 D: ");   scanf("%d", &d);

  max = a;

  if (b>max) max = b;
  if (c>max) max = c;
  if (d>max) max = d;

  printf("최댓값은 %d입니다.\n", max);
  
  return 0;
}