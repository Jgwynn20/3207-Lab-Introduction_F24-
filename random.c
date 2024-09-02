#include <stdlib.h>

//generate a random character from 'A' to 'Z'
char randchar() {

    return 'A' + (rand() % 26);
}