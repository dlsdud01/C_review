#include <stdio.h>
int main(void)
{
  int a, b, max, min;

  puts("정수 두 개를 입력해 주세요.");
  printf("정수 A: ");   scanf("%d", &a);
  printf("정수 B: ");   scanf("%d", &b);

  if (a>b) 
  {
    max = a;
    min = b;
  }
  else
  { 
    max = b;
    min = a;
  }

  printf("큰 쪽의 값은 %d입니다.\n", max);
  printf("작은 쪽의 값은 %d입니다.\n", min);
  
  return 0;
}