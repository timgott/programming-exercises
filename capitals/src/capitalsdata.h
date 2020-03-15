#pragma once

typedef struct Country {
    // name of the capital of the country
    char capital[50];

    // name of the country
    char name[50];
} Country;

// reads a country/capital data file using the format outlined in the task documentation
int read_capitals_data(const char* fname, Country **buffer);