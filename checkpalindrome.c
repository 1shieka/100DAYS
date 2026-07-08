//Compare characters from both ends. If every pair matches, it is a palindrome. The moment one pair differs, it is not.

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];

    // Read the complete string, including spaces if present
    fgets(s, sizeof(s), stdin);

    // Remove newline added by fgets
    s[strcspn(s, "\n")] = '\0';

    int left = 0;
    int right = strlen(s) - 1;

    // Assume the string is a palindrome initially
    int isPalindrome = 1;

    // Compare characters from both ends
    while (left < right) {

        // If characters do not match, it is not a palindrome
        if (s[left] != s[right]) {
            isPalindrome = 0;
            break;
        }

        // Move both pointers toward the center
        left++;
        right--;
    }

    // Print result
    if (isPalindrome) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}

// Interview logic:
// 1. Keep one pointer at the start and another at the end.
// 2. Compare characters at both pointers.
// 3. If they differ, the string cannot be a palindrome.
// 4. If they match, move left forward and right backward.
// 5. If all pairs match, print YES.
