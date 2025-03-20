#include <stdio.h>

int main(void)
{
  int a, b;
  
  printf("정수 두 개를 입력해 주세요.\n");
  printf("정수 A : ");    scanf("%d", &a);
  printf("정수 B : ");    scanf("%d", &b);

  if(a == b)
    puts("이들의 값은 서로 같습니다.");
  else
    puts("이들의 값은 서로 다릅니다.");

    return 0;
}