#include <stdio.h>
int main(void)
{
  int month;

  printf("몇 월인가요 ? : ");
  scanf("%d", &month);

  if (month >= 3 && month <= 5)
  {
    printf("%d월은 봄입니다.\n", month);
  } else if (month >= 6 && month <= 8)
  {
    printf("%d월은 여름입니다.\n", month);
  } else if (month >= 9 && month <= 11)
  {
    printf("%d월은 가을입니다.\n", month);
  } else if (month == 12 || month == 1 || month == 2)
  {
    printf("%d월은 겨울입니다.\n", month);
  } else
    printf("%d월이라는 달은 없습니다.\a\n", month);

  return 0;
}