#include <stdio.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

int isWhitespace(char c) {
    return (c == ' ' || c == '\t' || c == '\n' || c == '\r');
}

int main() {
    char buffer[BUFFER_SIZE];
    int bytesRead, wordCount = 0;
    int inWord = 0;

    while ((bytesRead = read(0, buffer, BUFFER_SIZE)) > 0) {
        for (int i = 0; i < bytesRead; i++) {
            if (isWhitespace(buffer[i])) {
                inWord = 0;
            } else {
                if (!inWord) {
                    wordCount++;
                    inWord = 1;
                }
            }
        }
    }

    printf("Number of words: %d\n", wordCount);
    return 0;
}

