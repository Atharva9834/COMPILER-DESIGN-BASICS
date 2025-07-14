#include <stdio.h>
#include <string.h>
#include <ctype.h>

// List of keywords
char keywords[10][10] = {"int", "float", "if", "else", "while", "for", "return", "char", "double", "void"};

// Function to check if a string is a keyword
int isKeyword(char *word) {
    for (int i = 0; i < 10; i++) {
        if (strcmp(word, keywords[i]) == 0)
            return 1;
    }
    return 0;
}

// Function to check if a character is an operator
int isOperator(char ch) {
    char operators[] = "+-*/=%<>&|!^";
    for (int i = 0; operators[i] != '\0'; i++) {
        if (ch == operators[i])
            return 1;
    }
    return 0;
}

int main() {
    FILE *fp;
    char ch, word[50];
    int index = 0;

    fp = fopen("input.txt", "r"); // Input file to read
    if (fp == NULL) {
        printf("Cannot open input file.\n");
        return 1;
    }

    printf("Lexical Analysis Result:\n");

    while ((ch = fgetc(fp)) != EOF) {
        // If character is letter or digit, build a word
        if (isalnum(ch)) {
            word[index++] = ch;
        }
        else {
            if (index != 0) {
                word[index] = '\0';
                if (isKeyword(word))
                    printf("[Keyword]    %s\n", word);
                else
                    printf("[Identifier] %s\n", word);
                index = 0;
            }

            // Check for operators
            if (isOperator(ch)) {
                printf("[Operator]   %c\n", ch);
            }
        }
    }

    fclose(fp);
    return 0;
}
