#include <stdio.h>

int main(void)
{
  int n;

  printf("정수를 입력해 주세요: ");
  scanf("%d", &n);

  if (n>=0)
    printf("절댓값은 %d입니다.\n", n);
  else
    printf("절댓값은 %d입니다.\n", -n);
    
  return 0;
}