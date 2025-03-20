#include <stdio.h>

int main(void)
{
  int n;

  printf("정수를 입력해 주세요: ");
  scanf("%d", &n);

  if (n%2)
    puts("그 수는 홀수입니다.\n");

    return 0;
}