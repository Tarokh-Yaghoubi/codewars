#include <ctype.h>
#include <string.h>
​
char *to_jaden_case (char *jaden_case, const char *string)
{
// write to jaden_case and return it
​
  char* start = jaden_case;
  int new_word = 1;
  while (*string) {
    unsigned char c = (unsigned char)*string;
    if (new_word) {
      jaden_case[0] = (char)toupper(c);
    } else {
      jaden_case[0] = (char)c;
    }
    
    new_word = isspace(c);
    jaden_case++;
    string++;
  }  
  
  *jaden_case = '\0';
  return start;
}