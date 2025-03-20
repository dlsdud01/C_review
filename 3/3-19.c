#include <stdio.h>
int main(void)
{
  int n;

  printf("정수를 입력해 주세요 : ");
  scanf("%d", &n);

  switch (n % 3)
  {
    case 0 : printf("그 수는 3으로 나누어 떨어집니다.\n");  break;
    case 1 : printf("그 수를 3으로 나눈 나머지는 1 입니다.\n"); break;
    case 2 : printf("그 수를 3으로 나눈 나머지는 2 입니다.\n"); break;
  }
  return 0;
}