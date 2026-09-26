// Find the longest word in a sentence.
#include <stdio.h>
#include <string.h>

int main() {
    char sentence[1000];
    char longestWord[100] = "";
    char *word;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    word = strtok(sentence, " \n");
    while (word != NULL) {
        if (strlen(word) > strlen(longestWord)) {
            strcpy(longestWord, word);
        }
        word = strtok(NULL, " \n");
    }

    printf("Longest word: %s\n", longestWord);

    return 0;
}
