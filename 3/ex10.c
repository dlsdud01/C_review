#include <stdio.h>

int main(void)
{
  int a, b, c;

  puts("정수 세 개를 입력해 주세요.");
  printf("정수 A: ");   scanf("%d", &a);
  printf("정수 B: ");   scanf("%d", &b);
  printf("정수 C: ");   scanf("%d", &c);

  if ( a == b && b == c )
    puts("세 값이 서로 같습니다.");
  else if (a != b && b != c  && c != a )
    puts("세 값이 서로 다릅니다.");
  else
    puts("두 값이 서로 같습니다.");

  return 0;
}