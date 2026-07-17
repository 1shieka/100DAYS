//rotate by k positions

#include <stdio.h>
int main() {
    int n;

    // Read size of array
    scanf("%d", &n);
    int arr[n];
    int temp[n];

    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int k;

    scanf("%d", &k);  // Read number of rotations
    k = k % n;  // If k is greater than array size

    /*
      Place every element at its new position.
      New index = (current index + k) % n
    */
  
    for (int i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }

    // Print rotated array
    for (int i = 0; i < n; i++) {
        printf("%d ", temp[i]);
    }

    return 0;
}

// Logic 
// 1. Read the array and the number of rotations (k).
// 2. Reduce k using k % n because rotating n times gives the original array.
// 3. Create a temporary array.
// 4. For every element, calculate its new position: newIndex = (i + k) % n
// 5. Store the element at its new position.
// 6. Print the temporary array.

