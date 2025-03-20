#include <stdio.h>

int main(void)
{
  int a, b;
  
  printf("정수 두 개를 입력해 주세요.\n");
  printf("정수 A : ");    scanf("%d", &a);
  printf("정수 B : ");    scanf("%d", &b);

  if(a%b)
    puts("B는 A의 약수가 아닙니다.");
  else
    puts("B는 A의 약수 입니다.");

    return 0;
}