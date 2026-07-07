// A secret system stores code names in forward order. To display them in mirror format, you must transform the given code name so that its characters appear in the opposite order.
//Input: hello  Output: olleh
//The first character moves to the last position, the second to the second-last, and so on until the entire string is mirrored

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];

    // Read the input string
    scanf("%s", s);

    // Find the index of the last character
    int left = 0;
    int right = strlen(s) - 1;

    // Swap characters from both ends until pointers meet in the middle
    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        // Move inward after each swap
        left++;
        right--;
    }

    // Print the reversed string
    printf("%s", s);

    return 0;
}

//Time Complexity: O(n)
//Space Complexity: O(1)
