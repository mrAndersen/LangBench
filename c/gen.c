#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <string.h>


int main() {
    FILE *fptr;
    char *strings[1000000];
    char string[20];

    fptr = fopen("../set.txt", "r");
    int i = 0;

    while ((fgets(string, 30, fptr))) {
        strings[i] = string;
        i++;
    }

    struct timeval tvs;
    gettimeofday(&tvs, NULL);
    long start = tvs.tv_usec;

    int f = 0;
    char *search = "abcde";

    for (i = 0; i < sizeof(strings) / sizeof(strings[0]); i++) {
        char *local = strings[i];
        char *ptr = strstr(local, search);

        if (ptr != NULL) {
            f++;
        }
    }

    struct timeval tve;
    gettimeofday(&tve, NULL);
    long end = (tve.tv_usec - tvs.tv_usec) / 1000;

    fclose(fptr);
    printf("C in %dms - %d\n", end, f);
}