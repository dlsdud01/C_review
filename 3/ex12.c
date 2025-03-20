#include <stdio.h>

int main(void)
{
  int n;

  printf("정수를 입력해 주세요: ");
  scanf("%d", &n);

  switch (n%2){
    case 0 : puts("그 수는 짝수입니다.\n"); break;
    case 1 : puts("그 수는 홀수입니다.\n"); break;
  }
    return 0;
}