#include <stdio.h>
#include <string.h>

int main() {
    char A[11], B[11]; // Maximum length of strings is 10 + 1 for null-terminator

    // Read the input strings
    scanf("%s", A);
    scanf("%s", B);

    // Print the sizes of A and B
    printf("%lu %lu\n", strlen(A), strlen(B));

    // Print the concatenated string
    printf("%s%s\n", A, B);

    // Swap the first characters of A and B and print the modified strings
    char temp;
    temp = A[0];
    A[0] = B[0];
    B[0] = temp;

    printf("%s %s\n", A, B);

    return 0;
}
