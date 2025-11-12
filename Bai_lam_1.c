#include <stdio.h>
#include <stdlib.h>
int difference(int a, int b) {
    return abs(a - b);
}
int product(int a, int b) {
    return a * b;
}
int main() {
    int num1 = 18, num2 = 36;
    int diff = difference(num1, num2);
    int prod = product(num1, num2);
    printf("Do chenh lech giua %d va %d la: %d\n", num1, num2, diff);
    printf("Tich cua %d va %d la: %d\n", num1, num2, prod);
    return 0;
}

