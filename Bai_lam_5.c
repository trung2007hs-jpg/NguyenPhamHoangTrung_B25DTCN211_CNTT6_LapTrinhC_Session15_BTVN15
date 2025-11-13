#include <stdio.h>
void findMostFrequent(int arr[], int size) {
    int maxCount = 0;
    int value = arr[0];
    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            value = arr[i];
        }
    }
    printf("Phan tu xuat hien nhieu nhat: %d\n", value);
    printf("So lan xuat hien: %d\n", maxCount);
}
int main() {
    int numbers[] = {36, 15, 36, 2, 8, 5, 12, 18, 5, 36};
    int size = 10;
    findMostFrequent(numbers, size);
    return 0;
}

