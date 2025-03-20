#include <stdio.h>

int main(void)
{
  int n;

  printf("정수를 입력해 주세요: ");
  scanf("%d", &n);

  if (n%5)
    puts("그 수는 5로 나누어 떨어지지 않습니다.\n");

    return 0;
}