#include <stdio.h>

int main(void)
{
  int n;

  printf("정수를 입력해 주세요.\n");
  printf("정수 : ");
  scanf("%d", &n);

  printf("%d에 12를 더하면 %d 입니다.\n", n, n+12);

  return 0;
}