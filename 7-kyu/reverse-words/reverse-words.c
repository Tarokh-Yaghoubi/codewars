#include <stdlib.h>
#include <string.h>
#include <stdio.h>
​
char* reverseWords(const char* text) {
    char *result = calloc(strlen(text) + 1, sizeof(char));
​
    if (result == NULL)
        return NULL;
​
    const char *head = text;
    const char *current = text;
    const char *tail = &text[strlen(text)];
​
    int k = 0;
​
    while (head <= tail) {
        if (*head == ' ' || *head == '\0') {
            const char *tmp = head;
            tmp--;
​
            while (tmp >= current) {
                result[k++] = *tmp;
                tmp--;
            }
​
            current = head;
​
            if (*current != '\0') {
                result[k++] = *current;
                current++;
            }
        }
​
        head++;
    }
​
    return result;
}