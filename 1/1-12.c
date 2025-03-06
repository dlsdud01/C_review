#include <stdio.h>

int main(void)
{
  int no;

  printf("정수를 입력해 주세요: ");
  scanf("%d", &no);

  printf("그 값에 5를 곱하면 %d입니다.\n", no*5);

  return 0;
}