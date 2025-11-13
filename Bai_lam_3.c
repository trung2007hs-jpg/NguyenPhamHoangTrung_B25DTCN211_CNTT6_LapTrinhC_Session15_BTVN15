#include <stdio.h>
int reverseNumber(int n) {
    int reversed = 0;
    int sign = 1;
    if (n < 0) {
        sign = -1;
        n = -n;
    }
    while (n > 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    return reversed * sign;
}
int main() {
    int number = -1234;
    int result = reverseNumber(number);
    printf("So dao nguoc cua %d la: %d\n", number, result);
    return 0;
}

