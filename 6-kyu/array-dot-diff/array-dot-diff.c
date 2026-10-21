#include <stddef.h>
#include <stdlib.h>
#include <string.h>
​
//  assign the length of your array to *z
//  your returned array will be freed
​
int *array_diff(const int arr1[/* n1 */], size_t n1, const int arr2[/* n2 */], size_t n2, size_t *z) {
​
    //  <----  hajime!int
​
      int * result = malloc(sizeof(int) * n1);
      int k = 0;
​
      int len_arr1 = n1;
      int len_arr2 = n2;
      
      for (int i = 0; i < len_arr1; i++) {
          int found = 0;
          for (int j = 0; j < len_arr2; j++) {
              if (arr1[i] == arr2[j])
                  found = 1;
          }
        
          if (found == 0)
              result[k++] = arr1[i];        
      }
      *z = k;
      return result;
}