#include <stdio.h>

int main(void)
{
  int n;

  printf("정수를 입력해 주세요 : ");
  scanf("%d", &n);

  if (n>0)
  {
    if (n%2)
      puts("그 수는 홀수입니다.");
    else
      puts("그 수는 짝수입니다.");

  } else
    puts("양수가 아닌 값을 입력했습니다.\a\n");

return 0;
}