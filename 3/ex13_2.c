#include <stdio.h>

int main(void) {
    int month;

    printf("몇 월인가요? : ");
    scanf("%d", &month);

    switch (month) {
        case 12: case 1: case 2:
            printf("%d월은 겨울입니다.\n", month);
            break;
        case 3: case 4: case 5:
            printf("%d월은 봄입니다.\n", month);
            break;
        case 6: case 7: case 8:
            printf("%d월은 여름입니다.\n", month);
            break;
        case 9: case 10: case 11:
            printf("%d월은 가을입니다.\n", month);
            break;
        default:
            printf("%d월이라는 달은 없습니다.\n", month);
    }

    return 0;
}
