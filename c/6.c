/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char c;
    //int ch;

    scanf("%c", &c);
    //ch = c;
    c = toupper(c);
    
    if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        printf("O");
    }

    else {
        printf("X");
    }

    return 0;
}