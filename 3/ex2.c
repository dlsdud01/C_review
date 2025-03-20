#include <stdio.h>

int main(void)
{
  int n;

  printf("정수를 입력해 주세요: ");
  scanf("%d", &n);

  if (n == 0)
    puts("그 수는 0입니다.");
  else if (n > 0)
    puts("그 수는 양수입니다.");
  else if (n < 0)
    puts("그 수는 음수입니다.");

  return 0;
}
/* 3-9.c와 결과는 똑같으나 코드 가독성은 3-9.c 가 우위 */