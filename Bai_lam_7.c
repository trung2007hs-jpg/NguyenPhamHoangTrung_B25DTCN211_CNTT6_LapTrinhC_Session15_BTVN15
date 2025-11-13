#include <stdio.h>
int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}
int main() {
    int numbers[] = {1, 2, 3, 5, 8, 10};
    int size = 6;
    int target = 5;
    int index = binarySearch(numbers, size, target);
    if (index != -1) {
        printf("Tim thay %d tai chi so: %d\n", target, index);
    } else {
        printf("Khong tim thay %d trong mang.\n", target);
    }
    return 0;
}

