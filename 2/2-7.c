#include <stdio.h>

int main(void)
{
  double vx, vy;
  
  puts("실수 두 개를 입력해 주세요.");
  printf("실수 vx : ");    scanf("%lf", &vx);
  printf("실수 vy : ");    scanf("%lf", &vy);
  printf("vx + vy =  %lf\n", vx+vy);
  printf("vx - vy =  %lf\n", vx-vy);
  printf("vx * vy =  %lf\n", vx*vy);
  printf("vx / vy =  %lf\n", vx/vy);

  return 0;
}