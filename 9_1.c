#include <stdio.h>
#include <ctype.h>

int main() {
    char fname[100];
    FILE *fp;
    int ch;
    long chars = 0, lines = 0, words = 0, spaces = 0;
    int inword = 0;

    if (scanf("%99s", fname) != 1) return 0;
    fp = fopen(fname, "r");
    if (fp == NULL) { printf("Cannot open file\n"); return 0; }

    while ((ch = fgetc(fp)) != EOF) {
        chars++;
        if (ch == '\n') lines++;
        if (ch == ' ') spaces++;
        if (isspace(ch)) {
            if (inword) { words++; inword = 0; }
        } else {
            inword = 1;
        }
    }
    if (inword) words++;

    printf("Characters: %ld\n", chars);
    printf("Lines: %ld\n", lines);
    printf("Words: %ld\n", words);
    printf("Spaces: %ld\n", spaces);

    fclose(fp);
    return 0;
}
