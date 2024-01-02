#include <stdio.h>
void readArray(int arr[], int size) {
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}

void printArray(int A[], int n) {
    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}
int binarySearch(int A[], int low, int high, int key) {
    if (low <= high) {
        int mid = low + (high - low) / 2;
        if (A[mid] == key) {
            return mid;
        }

        if (A[mid] > key) {
            return binarySearch(A, low, mid - 1, key);
        }

        return binarySearch(A, mid + 1, high, key);
    }
    return -1;
}

int main() {
    int n, key;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int A[n];
    readArray(A,n);
    printArray(A,n);
    printf("Enter the element to search: ");
    scanf("%d", &key);
    int result = binarySearch(A, 0, n - 1, key);
    if (result != -1) {
        printf("Element %d found at index %d.\n", key, result);
    } else {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}