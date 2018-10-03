#include <stdio.h>

#define DIFF ('A' - 'a')

int main() {
    int ch;
    while ((ch = getchar()) != EOF) {
        putchar((ch >= 'a' && ch <= 'z') ? ch + DIFF : ch);
    }
    

    return 0;
}