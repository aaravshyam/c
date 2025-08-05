#include <stdio.h>
#include <string.h>

#define SIZE 100

void input(char *str);
void concatenate_strings(char *str1, char *str2);
void display(char *str);

int main() {
    char str1[SIZE], str2[SIZE];

    printf("Enter the first string: ");
    input(str1);

    printf("Enter the second string: ");
    input(str2);

    concatenate_strings(str1, str2);

    printf("Concatenated string: ");
    display(str1);

    return 0;
}

void input(char *str) {
    fgets(str, SIZE, stdin);

    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }
}

void concatenate_strings(char *str1, char *str2) {
    int i = 0, j = 0;

    while (str1[i] != '\0') {
        i++;
    }

    while (str2[j] != '\0') {
        str1[i++] = str2[j++];
    }

    str1[i] = '\0';
}

void display(char *str) {
    int i = 0;

    while (str[i] != '\0') {
        putchar(str[i++]);
    }

    printf("\n");
}
