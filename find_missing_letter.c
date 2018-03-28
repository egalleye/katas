#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char findMissingLetter(char array[], int arrayLength)
{
    char missing;
    int ascii_val;
    int ascii_val_prev;
    int iter;
    for (iter = 0; iter < arrayLength; iter++) {
        ascii_val = array[iter];
        if (iter != 0) {
            if (ascii_val != (ascii_val_prev+1) ) {
                missing = ascii_val_prev+1;
            }
        }
        ascii_val_prev = ascii_val;
        
    }
    return missing;
}

int main() {
    char missing;
    char arr1[] = { 'a','b','c','d','f' };
    missing = findMissingLetter(arr1, 5);
    printf("missing letter is %c\n", missing);
}
