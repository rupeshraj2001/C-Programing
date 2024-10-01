#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50];
    int result;

    // Input first string
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0;  // Remove newline if present

    // Input second string
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0;  // Remove newline if present

    // Compare the strings
    result = strcmp(str1, str2);

    // Print the result
    printf("\nComparing '%s' and '%s':\n", str1, str2);
    if (result == 0) {
        printf("The strings are equal.\n");
    } else if (result < 0) {
        printf("'%s' comes before '%s' lexicographically.\n", str1, str2);
    } else {
        printf("'%s' comes after '%s' lexicographically.\n", str1, str2);
    }

    return 0;
}
