//Reverse Array Using Two Pointer Approach

#include <stdio.h>

int main() {
    int n;

    // Read the size of the array
    scanf("%d", &n);

    int arr[n];

    // Read the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Use two pointers: one from the start and one from the end
    int left = 0;
    int right = n - 1;

    // Swap elements until both pointers meet
    while (left < right) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        left++;
        right--;
    }

    // Print the reversed array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
