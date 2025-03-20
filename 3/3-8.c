#include <stdio.h>

int main(void)
{
  int n;

  printf("정수를 입력해 주세요: ");
  scanf("%d", &n);

  if (n%10 == 5)
    puts("일의 자리 숫자는 5입니다.\n");
  else
    puts("일의 자리 숫자는 5가 아닙니다.\n");

    return 0;
}