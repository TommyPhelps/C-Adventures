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

    printf("Enter the numbers that you would like to calculate!\n\n");

    printf("Number 1: ");
    scanf("%d", &firstNum);

    printf("Number 2: ");
    scanf("%d", &secondNum);

    result = add(firstNum, secondNum);

    printf("\n%d + %d = %d", firstNum, secondNum, result);

    return 0;
}