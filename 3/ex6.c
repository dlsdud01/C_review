#include <stdio.h>
int main(void)
{
  int a, b, c, min;

  puts("정수 세 개를 입력해 주세요.");
  printf("정수 A: ");   scanf("%d", &a);
  printf("정수 B: ");   scanf("%d", &b);
  printf("정수 C: ");   scanf("%d", &c);

  min = a;

  if (b<min) min = b;
  if (c<min) min = c;

  printf("최솟값은 %d입니다.\n", min);
  return 0;
}