/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    // 이곳에 코드를 작성해주세요!
    int y, m;

    scanf("%d %d", &y, &m);
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
        printf("31");
    }
    
    else {
        if (m == 2) {
            if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) {
                printf("29");
            }

            else {
                printf("28");
            }
        }

        else {
            printf("30");
        }
    }

    return 0;
}