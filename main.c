// 문제 : for문을 사용해서 구구단 4단 출력
// 조건 : while 문을 for문으로 변경해주세요.

#include <stdio.h>

int main(void) {
    int dan = 4;

    printf("== %d단 ==\n", dan);

    //int i = 1; // 힌트 : 이 부분을 소괄호 안 앞쪽에 넣으세요.
    //while (i <= 9) {
    //    printf("%d * %d = %d\n", dan, i, dan * i);
    //    i++; // 힌트 : 이 부분을 소괄호 안 뒤쪽에 넣으세요.
    //}

    //초기값;
    //while (조건식) {
    //    조건식이 참일경우 실행할 문장;
    //    증감값;
    //}

    for (int i = 1; i <= 9; i++) {
        printf("%d * %d = %d\n", dan, i, dan * i);
    }
    // 1. 1 ~ 100까지 출력
    printf("======1번======\n");
    for (int i = 1; i <= 100; i++) {
        printf("%d", i);
    }
    printf("\n");
    printf("======2번======\n");
    // 2. -25 ~ 50까지 출력
    for (int i = -25; i <= 50; i++) {
        printf("%d", i);
    }
    printf("\n");
    printf("======3번======\n");
    // 3. 1 ~ 100 까지 짝수만 출력
    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            printf("%d", i);
        }
    }
    printf("\n");
    printf("======4번======\n");
    // 4. 100 ~ 200 사이의 홀수만 출력
    for (int i = 1; i <= 100; i++) {
        if (i % 2 != 0) {
            printf("%d", i);
        }
    }
    printf("\n");
    printf("======5번======\n");
    // 5. 1 ~ 500 사이의 수 중 4의 배수만 출력
    for (int i = 1; i <= 500; i++) {
        if (i % 4 == 0) {
            printf("%d", i);
        }
    }
    printf("\n");
    printf("======6번======\n");
    // 6. 1 ~ 1000 사이의 수 중 1000의 약수만 출력 -> 1000 % a == 0
    // 약수 -> 1000을 a로 나누었을 때 나누어 떨어지면 a를 1000의 약수라고 한다.
    // 약수는 1 ~ 자기자신만 대상 수로 한다.
    // 나누어 떨어진다는 것은 나누었을 때 나머지가 0이라는 것을 의미한다.
    for (int a = 1; a <= 1000; a++) {
        if (1000 % a == 0) {
            printf("%d\n", a);
        }
    }
    printf("\n");
    printf("======7번======\n");
    // 7. 1 ~ 1000 사이의 수 중 3의 배수 이면서 5의 배수인 수만 출력
    for (int i = 1; i <= 1000; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d\n", i);
        }
    }
    //  0
  //  0 + 1
  //  0 + 1 + 2
  //  0 + 1 + 2 + 3
  //  0 + 1 + 2 + 3 + 4 
    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        sum = sum + i;
    }
    printf("1부터 100까지의 합 : %d\n", sum);
    printf("\n");
    sum = 0;
    int i = 1;
    while (i <= 100) {
        sum = sum + i;
        i++;
    }
    printf("1부터 100까지의 합 : %d\n", sum);
    sum = 0;
    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            sum = sum + i;
        }
    }
    printf("1부터 100까지의 짝수 합 : %d\n", sum);
    sum = 0;
    i = 1;
    while (i <= 100) {
        if (i % 2 == 0) {
            sum = sum + i;
        }
        i++;
    }
    printf("1부터 100까지의 짝수 합 : %d\n", sum);
    return 0;
}