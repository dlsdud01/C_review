#include <stdio.h>

int main(void)
{
  int vx, vy;

  puts("정수 두 개를 입력해 주세요.");
  printf("정수 vx: ");    scanf("%d", &vx);
  printf("정수 vy: ");    scanf("%d", &vy);

  printf("vx + vy = %d\n", vx+vy);
  printf("vx - vy = %d\n", vx-vy);
  printf("vx * vy = %d\n", vx*vy);
  printf("vx / vy = %d\n", vx/vy);
  printf("vx %% vy = %d\n", vx%vy);

  return 0;
}