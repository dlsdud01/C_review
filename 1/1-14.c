#include <stdio.h>

int main(void)
{
  int n1, n2;
  int sum;

  puts("정수를 두 개를 입력해 주세요.");
  printf("정수1 : ");
  scanf("%d", &n1);
  printf("정수2 : ");
  scanf("%d", &n2);

  sum = n1 + n2;

  printf("이를 합하면 %d 입니다.\n", sum);

  return 0;
}