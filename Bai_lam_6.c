#include <stdio.h>
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {  
                // Doi cho 2 phan tu
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main() {
    int numbers[] = {5, 2, 8, 1, 3};
    int size = 5;
    printf("Mang truoc khi sap xep: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    bubbleSort(numbers, size);
    printf("Mang sau khi sap xep tang dan: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    return 0;
}

