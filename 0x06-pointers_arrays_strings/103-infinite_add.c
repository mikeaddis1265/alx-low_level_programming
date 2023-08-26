#include "main.h"
#include <stddef.h>

char *infinite_add(char *n1, char *n2, char *r, int size_r) {
    int len1 = 0;
    int len2 = 0;

    int digit1;
    int digit2;
    int sum;
    int carry = 0;

    char temp;
    int start = 0;
    int end;
    int i = 0;

    while (n1[len1]) {
        len1++;
    }

    while (n2[len2]) {
        len2++;
    }

    while (len1 > 0 || len2 > 0 || carry > 0) {
        digit1 = (len1 > 0) ? (n1[--len1] - '0') : 0;
        digit2 = (len2 > 0) ? (n2[--len2] - '0') : 0;

        sum = digit1 + digit2 + carry;
        r[i++] = sum % 10 + '0';
        carry = sum / 10;
    }

    if (i >= size_r) {
        return NULL;
    }

    r[i] = '\0';

    end = i - 1;

    while (start < end) {
        temp = r[start];
        r[start] = r[end];
        r[end] = temp;
        start++;
        end--;
    }

    return r;
}
