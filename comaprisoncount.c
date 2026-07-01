//linear search with comparison count


#include <stdio.h>

int main() {
    int n, k;

    // Read the size of the array
    scanf("%d", &n);

    int arr[n];

    // Read the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the key to search
    scanf("%d", &k);

    int comparisons = 0;
    int found = -1;

    // Perform linear search
    for (int i = 0; i < n; i++) {
        comparisons++;

        if (arr[i] == k) {
            found = i;
            break;
        }
    }

    // Display the result
    if (found != -1)
        printf("Found at index %d\n", found);
    else
        printf("Not Found\n");

    printf("Comparisons = %d", comparisons);

    return 0;
}


/*
    Read the size of the array and its elements.

    Read the key to be searched.

    Traverse the array one element at a time.

    Compare each element with the key and count
    every comparison performed.

    If the key is found, store its index and stop searching.

    Display the index if found; otherwise print "Not Found".

    Finally, print the total number of comparisons made.




Input:
Elements : 10 20 30 40 50
Key : 30

Output:
Found at index 2
Comparisons = 3
*/
