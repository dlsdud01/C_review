#include <stdio.h>

int main(void)
{
  int a = 3;
  int b = 5;

  puts("a가 3일때 a=3의 값을 출력합니다다.");

  if (a=3)
  {
    printf("%d\n", a==3);
  }

  puts("a=3 b=5 일때 a<b의 값을 출력합니다다.");

  if (a=3, b=5)
  {
    printf("%d", a<b);
  }


  return 0;
}