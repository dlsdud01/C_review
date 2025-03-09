#include <stdio.h>

int main(void)
{
  int no;

  printf("정수를 입력해 주세요 : ");
  scanf("%d", &no);

  printf("일의 자리 숫자는 %d 입니다.", no%10);
  return 0;
}