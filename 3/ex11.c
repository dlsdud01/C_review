#include <stdio.h>
int main(void)
{
  int a, b;

  puts("정수 두 개를 입력해 주세요.");
  printf("정수 A: ");   scanf("%d", &a);
  printf("정수 B: ");   scanf("%d", &b);

  if ( (a >= b && a - b <= 10) || (b > a && b - a <= 10))
  {
    puts("두 값의 차이는 10 이하입니다.");
  } else
    puts("두 값의 차이는 11 이상입니다.");

    return 0;
}