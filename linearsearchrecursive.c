#include <stdio.h>
void readArray(int A[], int n) {
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
}

void printArray(int A[], int n) {
    printf("Array elements are: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}
int linearSearchRecursive(int A[], int n, int key, int index) {
    if (index == n) {
        
        return -1;
    }

    if (A[index] == key) {
        
        return index;
    }
    return linearSearchRecursive(A, n, key, index + 1);
}


int main() {
    int n, key, result;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int A[n];
    readArray(A,n);
    printArray(A,n);
    printf("Enter the element to search: ");
    scanf("%d", &key);
    result = linearSearchRecursive(A,n, key, 0);
    if (result != -1) {
        printf("Element %d found at index %d.\n", key, result);
    } else {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}
