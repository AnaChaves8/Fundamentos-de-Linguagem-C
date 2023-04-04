#include <stdio.h>
#include <ctype.h>

int countSpaces(char str[], int size) {
    int count = 0;
    for(int i = 0; i < size; i++) {
        if(str[i] == ' ') {
            count++;
        }
    }
    return count;
}

int countVowels(char str[], int size) {
    int count = 0;
    for(int i = 0; i < size; i++) {
        char c = tolower(str[i]);
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }
    return count;
}

int countConsonants(char str[], int size) {
    int count = 0;
    for(int i = 0; i < size; i++) {
        char c = tolower(str[i]);
        if(c >= 'a' && c <= 'z' && c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
            count++;
        }
    }
    return count;
}