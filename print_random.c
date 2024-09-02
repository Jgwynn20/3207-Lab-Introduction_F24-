#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "random.h"



void rand_string(char *str, size_t size) {
    for (size_t i = 0; i < size; i++) {
        str[i] = randchar();  // Use the randchar function to generate each character
    }
    str[size] = '\0';  // Null-terminate the string
}



char* rand_string_alloc(size_t size) {
    char *s = malloc(size + 1);
    if (s) {
        rand_string(s, size);
    }
    return s;
}



int main() {
    // Seed the random number generator
    srand((unsigned int)time(NULL));

    // Generate a random string of 7 letters
    char *random_word = rand_string_alloc(7);

    // Print the generated random string
    if (random_word) {

        printf("Random 7-letter word: %s\n", random_word);
        free(random_word);

    } else {

        printf("Memory allocation failed.\n");
    }

    return 0;
}