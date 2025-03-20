#include <stdio.h>
int main(void)
{
  int month;

  printf("몇 월인가요 ? : ");
  scanf("%d", &month);

  if ( month >= 1 && month <= 12){
    switch (month/3) {
      case 0 : printf("%d월은 겨울입니다.\n", month); break;
      case 1 : printf("%d월은 봄입니다.\n", month); break;
      case 2 : printf("%d월은 여름입니다.\n", month); break;
      case 3 : printf("%d월은 가을입니다.\n", month); break;
      case 4 : printf("%d월은 겨울입니다.\n", month); break;
    }
  } else {
    printf("%d월이라는 달은 없습니다.\a\n", month);
  }
  return 0;
}