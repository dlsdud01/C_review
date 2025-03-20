#include <stdio.h>
int main(void)
{
  int n;

  printf("정수를 입력해 주세요 : ");
  scanf("%d", &n);

  if(n % 3 == 0)
  {
    printf("그 수는 3으로 나누어 떨어집니다.");
  } else if(n%3 == 1)
  {
    printf("그 수를 3으로 나눈 나머지는 1 입니다.");
  } else
  {
    printf("그 수를 3으로 나눈 나머지는 2 입니다.");

  }

  return 0;
}