#include <stdio.h>

int add(int num1, int num2) {
    while (num2 != 0) {

        int carry = num1 & num2;

        num1 = num1 ^ num2;

        num2 = carry << 1;
    }
    return num1;
}

int main() {
    int num1 = 5;
    int num2 = 7;
    int sum = add(num1, num2);
    printf("Sum: %d\n", sum);
    return 0;
}
