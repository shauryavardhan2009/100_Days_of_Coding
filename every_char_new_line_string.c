//Print each character of a string on a new line.
void print_characters_new_line(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        printf("%c\n", str[i]);
        i++;
    }
}