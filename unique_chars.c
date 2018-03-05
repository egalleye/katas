#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char* longest_string (char* s1, char* s2) {
    int iter;
    int s1_length, s2_length;
    int longer_length;
    char curr_char;
    char ghetto_hash[26];
    int ghetto_key;
    char letter_val;
    char* result;
    char result_buffer[26];
    int buffer_ptr = 0;
    int result_length = 0;

    s1_length = strlen(s1);
    s2_length = strlen(s2);
    longer_length = (s1_length > s2_length) ? s1_length : s2_length; 

    for (iter = 0; iter < 26; iter++) {
        ghetto_hash[iter] = '\0';
    }
    for (iter = 0; iter < longer_length; iter++) {
        if (s1_length > iter) {
            curr_char = s1[iter];
            ghetto_key = curr_char - 97;
            ghetto_hash[ghetto_key] = curr_char;
        }
        if (s2_length > iter) {
            curr_char = s2[iter];
            ghetto_key = curr_char - 97;
            ghetto_hash[ghetto_key] = curr_char;
        }
    }
    for (iter = 0; iter < 26; iter++) {
        letter_val = ghetto_hash[iter];
        if (letter_val != '\0') {
            result_length++;
            result_buffer[buffer_ptr] = letter_val;
            buffer_ptr++;
        }
    }
    result = malloc(sizeof(char)*result_length+1);
    strncpy(result, result_buffer, result_length);
    result[result_length] = '\0';
    return result;
}

int main() {
    char s1[] = "aretheyhere";
    char s2[] = "yestheyarehere";
    char s3[16];
    printf("%s\n", longest_string(s1, s2));
    return 0;
}
