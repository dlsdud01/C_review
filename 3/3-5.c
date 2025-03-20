#include <stdio.h>

int main(void)
{
  int n;
  
  printf("정수를 입력해 주세요 : ");
  scanf("%d", &n);

  if(n)
    puts("그 수는 0이 아닙니다.");
  else
    puts("그 수는 0 입니다.");

    return 0;
}