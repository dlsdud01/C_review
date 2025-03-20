#include <stdio.h>

int main(void)
{
  int a, b;
  
  printf("정수 두 개를 입력해 주세요.\n");
  printf("정수 A : ");    scanf("%d", &a);
  printf("정수 B : ");    scanf("%d", &b);

  if(a == b)
    puts("A와 B의 값은 값습니다다.");
  else if (a > b )
    puts("A는 B보다 큽니다.");
  else
    puts("B는 A보다 큽니다.");

    return 0;
}