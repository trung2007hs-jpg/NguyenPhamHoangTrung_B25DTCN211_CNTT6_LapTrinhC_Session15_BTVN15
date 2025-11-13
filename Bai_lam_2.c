#include <stdio.h>
int sumOfDigits(int n) {
    if (n < 0) {
        n = -n;
    }
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += digit;
        n /= 10;
    }
    return sum;
}
int main() {
    int number = 12345;
    int result = sumOfDigits(number);
    printf("Tong cac chu so cua %d la: %d\n", number, result);
    return 0;
}

