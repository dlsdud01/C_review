#include <stdio.h>

int main(void)
{
  int n1, n2, n3;

  puts("정수 세 개를 입력해 주세요.");
  printf("정수1 : ");     scanf("%d", &n1);
  printf("정수2 : ");     scanf("%d", &n2);
  printf("정수3 : ");     scanf("%d", &n3);

  printf("이를 합하면 %d 입니다.\n", n1+n2+n3);
  
  return 0;
}