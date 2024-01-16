#include <stdio.h>
#include <stdlib.h>

char **strtow(char *str) {

    int i, j, pos, count, m;
    char **ptr;
    
    if (str == NULL || *str == '\0') {
        return NULL;
    }

    

    i = 0;
    pos = 0;
    j = 0;
    count = 0;

    while (str[i] != '\0') {
        i++; /*total number of characters*/
    }

    /* Count the number of words */
    while (str[j] != '\0') {
        while (str[j] == ' ') {
            j++;
        }
        if (str[j] != '\0') {
            count++;
            while (str[j] != ' ' && str[j] != '\0') {
                j++;
            }
        }
    }

    ptr = (char **)malloc(sizeof(char *) * (count + 1));
    if (ptr == NULL) {
        return NULL; /*Memory allocation failure*/
    }

    j = 0; // Reset j to iterate through the string again

    for (i = 0; i < count; i++) {
        while (str[j] == ' ') {
            j++;
        }

        count = 0;
        while (str[j] != ' ' && str[j] != '\0') {
            count++;
            j++;
        }

        ptr[i] = (char *)malloc(sizeof(char) * (count + 1));
        if (ptr[i] == NULL) {
            /*Memory allocation failure, free allocated memory and return NULL*/
            for (m = 0; m < i; m++) {
                free(ptr[m]);
            }
            free(ptr);
            return NULL;
        }

        // Reset j to the beginning of the word
        j = j - count;

        for (m = 0; m < count; m++) {
            ptr[i][m] = str[j];
            j++;
        }
        ptr[i][count] = '\0';
    }

    /*Set the last element to NULL*/
    ptr[count] = NULL;

    return ptr;
}