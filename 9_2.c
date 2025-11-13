#include <stdio.h>

int main() {
    char fname[100];
    FILE *fp;
    char ch;

    printf("Enter filename: ");
    scanf("%s", fname);

    fp = fopen(fname, "a");
    if (fp == NULL) {
        printf("Cannot open file\n");
        return 0;
    }

    printf("Start typing (enter '.' alone to stop):\n");

    while (1) {
        ch = getchar();
        if (ch == '.') {
            char next = getchar();
            if (next == '\n')
                break;
            fputc(ch, fp);
            fputc(next, fp);
        } else {
            fputc(ch, fp);
        }
    }

    fclose(fp);
    return 0;
}
