#include <stdio.h>
int main(void)
{
  int a, b;

  puts("정수 두 개를 입력해 주세요.");
  printf("정수 A: ");   scanf("%d", &a);
  printf("정수 B: ");   scanf("%d", &b);

  if (a>b)
    printf("큰 쪽의 값은 %d입니다.\n", a);
  else
    printf("큰 쪽의 값은 %d입니다.\n", b);

    return 0;
}