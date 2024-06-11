#include <stdio.h>

int add(int num1, int num2) {
    int result = 0;

    if (num1 != 0 && num2 != 0) {
        result = num1 + num2;
    }
    
    return result;
}

int main() {
    int firstNum;
    int secondNum;
    int result;

    scanf("%d %d", &firstNum, &secondNum);
    result = add(firstNum, secondNum);
    printf("%d + %d = %d", firstNum, secondNum, result);

    return 0;
}