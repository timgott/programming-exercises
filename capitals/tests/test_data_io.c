#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "../src/capitalsdata.h"

int main() {
    Country *countries;
    int count = read_capitals_data("tests/testdata.txt", &countries);

    int correctCount = 3;
    if (count != correctCount) {
        printf("Read %d countries, expected %d\n", count, correctCount);
        return 1;
    }

    if (strcmp(countries[2].capital, "hauptstadt3") != 0) {
        printf("Capital of 3rd country should be hauptstadt3, was %s", countries[2].capital);
        return 2;
    }

    for (int i=0;i<count;i++) {
        Country *country = &countries[i];
        printf("Land: %s; Hauptstadt: %s\n", country->name, country->capital);
    }

    return 0;
}