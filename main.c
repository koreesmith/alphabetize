#include <stdio.h>
#include <string.h>

#include <stdio.h>
#include <string.h>

int main()  {
    void AlphabetizeStrings(char **Array, int size);
    char *Array[] = {"banana", "apple", "cherry", "date"};
    int size = sizeof(Array) / sizeof(Array[0]);

    // Before sorting
    printf("Before sorting:\n");
    for (int i = 0; i < size; i++) {
        printf("%s\n", Array[i]);
    }

    // Sort the array
    AlphabetizeStrings(Array, size);

    // After sorting
    printf("After sorting:\n");
    for (int i = 0; i < size; i++) {
        printf("%s\n", Array[i]);
    }

    return 0;
}

// Function to sort an array of strings (text) in alphabetical order
void AlphabetizeStrings(char **Array, int size) {
    char *temp;

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (strcmp(Array[j], Array[j + 1]) > 0) {
                // Swap the strings
                temp = Array[j];
                Array[j] = Array[j + 1];
                Array[j + 1] = temp;
            }
        }
    }
}
