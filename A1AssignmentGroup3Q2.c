#include <stdio.h>
#include <string.h>
#include <ctype.h>
void capitalize(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if (i == 0 || str[i - 1] == ' ') {
            str[i] = toupper(str[i]);
        }
        i++;
    }
}
int main() {
    char sentence[100];
    printf("Enter a sentence:\n");
    fgets(sentence, 100, stdin);
    capitalize(sentence);
    printf("Capitalized sentence:\n%s", sentence);
    return 0;
}
