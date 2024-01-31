#include <stdio.h>
#include <stdarg.h>

void printCharacters(const char *first, ...) {
    va_list args;
    va_start(args, first);

    const char *current = first;
    while (*current != '\0') {
        putchar(*current);
        current = va_arg(args, );
    }

    va_end(args);
    putchar('\n');
}

int main() {
    printCharacters("Hello", '\0');
    return 0;
}
