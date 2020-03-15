#include "capitalsdata.h"
#include <stdio.h>

// Reads a line from a file without the newline character at the end
int read_line(FILE* f, char* buffer, int max_length) {
    int i = 0;
    while(i < max_length - 1) {
        int c = fgetc(f);
        if (c == EOF)
            break;
        if (c == '\n')
            break;
        buffer[i] = c;
        i++;
    }
    buffer[i] = '\0';
    return i;
}

int read_capitals_data(const char* fname, Country **buffer) {
    // TODO
}