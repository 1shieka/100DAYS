#include <stdio.h>
#include <stdlib.h>

// Merge two sorted halves
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2];

    // Copy left half
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];

    // Copy right half
    for (int i = 0; i < n2; i++)
        R[i] = arr[mid + 1 + i];

    int i = 0, j = 0, k = left;

    // Merge both halves in sorted order
    while (i < n1 && j < n2) {
        if (L[i] <= R[j])
            arr[k++] = L[i++];
        else
            arr[k++] = R[j++];
    }

    // Copy remaining elements from left half
    while (i < n1)
        arr[k++] = L[i++];

    // Copy remaining elements from right half
    while (j < n2)
        arr[k++] = R[j++];
}

// Recursive Merge Sort
void mergeSort(int arr[], int left, int right) {

    // Base case
    if (left >= right)
        return;

    int mid = left + (right - left) / 2;

    // Sort left half
    mergeSort(arr, left, mid);

    // Sort right half
    mergeSort(arr, mid + 1, right);

    // Merge both sorted halves
    merge(arr, left, mid, right);
}

int main() {

    int n;
    scanf("%d", &n);

    int arr[n];

    // Read array
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Sort the array
    mergeSort(arr, 0, n - 1);

    // Two pointers
    int left = 0;
    int right = n - 1;

    int minSum = abs(arr[left] + arr[right]);
    int first = arr[left];
    int second = arr[right];

    // Find pair whose sum is closest to zero
    while (left < right) {

        int sum = arr[left] + arr[right];

        // Update answer if current pair is better
        if (abs(sum) < minSum) {
            minSum = abs(sum);
            first = arr[left];
            second = arr[right];
        }

        // Move pointers
        if (sum < 0)
            left++;
        else
            right--;
    }

    printf("%d %d\n", first, second);

    return 0;
}
