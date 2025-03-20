#include <stdio.h>

int main(void)
{
  int n;
  printf("정수 : ");
  scanf("%d", &n);

  switch (n) {
    case 1: puts("A"); puts("B"); break;
    case 2: puts("C");
    case 5: puts("D"); break;
    case 6:
    case 7: puts("E"); break;
    default: puts("F"); break;
  }
}