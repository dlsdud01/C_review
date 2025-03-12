#include <stdio.h>

int main(void)
{
  int n;

  printf("정수를 입력해 주세요.: ");
  scanf("%d", &n);

  printf("부호를 바꾼 값은 %d 입니다.\n", -n);
}