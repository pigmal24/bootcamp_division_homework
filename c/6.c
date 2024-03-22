/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    // 이곳에 코드를 작성해주세요!
    char c;

    scanf("%c", &c);
    if (c >= 'a') {
        c = c - 'a' + 'A';
    }

    if (c == 65 || c == 101 || c == 73 || c == 79 || c == 85) {
        printf("O");
    }

    else {
        printf("X");
    }

    return 0;
}