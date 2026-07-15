//Write a program to find the maximum and minimum values present in a given array of integers.

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Assuming the first element is both maximum and minimum
    int max = arr[0];
    int min = arr[0];

    // Traverse array from second element
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i]; // Update maximum if a larger element is found
        }
      
        if (arr[i] < min) {
            min = arr[i]; // Update minimum if a smaller element is found
        }
    }

    printf("Max: %d\n", max);
    printf("Min: %d", min);
    return 0;
}
