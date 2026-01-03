#include <stdio.h>
#include <string.h>

int main() {
    char s1[20] = "Hello";
    char s2[20] = "World";

    printf("Length of s1: %lu\n", strlen(s1));
    strcpy(s1, s2);
    printf("After strcpy: %s\n", s1);
    strcat(s1, "!");
    printf("After strcat: %s\n", s1);

    if (strcmp(s1, s2) == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");

    return 0;
}
