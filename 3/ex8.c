#include <stdio.h>
int main(void)
{
  int a, b;
  
  puts("정수 두 개를 입력해 주세요.");
  printf("정수 A: ");   scanf("%d", &a);
  printf("정수 B: ");   scanf("%d", &b);

  if (a>b)
  {
    printf("이들의 차는 %d입니다.\n", a-b);
  } else
  {
    printf("이들의 차는 %d입니다.\n", b-a);
  }

  return 0;
}