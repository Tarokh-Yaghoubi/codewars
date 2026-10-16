#include <stddef.h>
​
float finduniq(const float nums[/* n */], size_t n)
{
    float repeated;
​
    if (nums[0] == nums[1] || nums[0] == nums[2]) {
        repeated = nums[0];
    } else {
        repeated = nums[1];
    }
  
    for (size_t i = 0; i < n; i++) {
        if (nums[i] != repeated) {
            return nums[i];
        }
    }
}