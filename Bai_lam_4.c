#include <stdio.h>
int sumArray(int arr[], int size) {
	int sum;
    for (int i = 0; i < size; i++) {
    	sum += arr[i];
    }
    return sum;
}
int main() {
    int numbers[] = {2, 5, 18, 12, 36};
    int size = 5;
    int result = sumArray(numbers, size);
    printf("Tong cac phan tu trong mang la: %d\n", result);
    return 0;
}

