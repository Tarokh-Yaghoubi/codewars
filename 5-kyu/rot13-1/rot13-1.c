#include <stdlib.h>
#include <string.h>
#include <stdio.h>
​
char* 
rot13(const char * src)
{
  size_t len = strlen(src);
  char * rot = calloc(len, sizeof(*src));
    if (rot == NULL) {
        printf("cannot allocate dynamic memory");
        return NULL;
    }
​
  for (int i = 0; i < len; i++) {
    if ((src[i] >= 65 && src[i] <= 77) || (src[i] >= 97 && src[i] <= 109))
      rot[i] = src[i] + 13;
    else if ((src[i] >= 78 && src[i] <= 90) || (src[i] >= 110 && src[i] <= 122))
      rot[i] = src[i] - 13;
    else if (src[i] <= 64 || (src[i] >= 91 && src[i] <= 96 || src[i] >= 123))
      rot[i] = src[i];
  }
​
  return rot;
}
​