/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    int y, m;

    scanf("%d %d", &y, &m);
    
    switch (m) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("31");
            break;
        case 2:
            if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) {
                printf("29");
                break;
            }

            else {
                printf("28");
                break;
            }
        default :
            printf("30");
    }

    return 0;
}