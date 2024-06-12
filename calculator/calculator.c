#include <stdio.h>

int add(int num1, int num2) {
    int result = 0;

    if (num1 != 0 && num2 != 0) {
        result = num1 + num2;
    }
    
    return result;
}

int sub(int num1, int num2) {
    int result = 0;

    if (num1 != 0 && num2 != 0) {
        result = num1 - num2;
    }
    
    return result;
}

int mul(int num1, int num2) {
    int result = 0;

    if (num1 != 0 && num2 != 0) {
        result = num1 * num2;
    }
    
    return result;
}

int main() {
    int firstNum;
    int secondNum;
    int result;
    char operation;

    printf("Enter the numbers that you would like to calculate!\n\n");

    printf("Number 1: ");
    scanf(" %d", &firstNum);

    printf("Number 2: ");
    scanf(" %d", &secondNum);

    printf("Enter the operation you would like to perform! +, -, *\n\n");

    printf("Operation: ");
    scanf(" %c", &operation);

    if (operation == '+') {
        result = add(firstNum, secondNum);
    } else if (operation == '-') {
        result = sub(firstNum, secondNum);
    } else if (operation == '*') {
		result = mul(firstNum, secondNum);
	}

    printf("\n%d + %d = %d", firstNum, secondNum, result);

    return 0;
}
