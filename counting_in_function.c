//Count characters in a string without using built-in length functions.
int count_characters(char *str) {
    int count = 0;
    while (str[count] != '\0') {
        count++;
    }
    return count;
}