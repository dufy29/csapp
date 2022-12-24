/*
浮点求和，两个版本
// 1 + 2 + 3 + … + 10000 = 10000 * (10000 + 1) / 2 = 50005000 ?
*/

#include <stdio.h>
int main() {
    // 有问题版本
    float sum1= 0.0f;
    for (int i = 0; i < 10000; i++) sum1 += i + 1;
      printf("Sum: %f\n", sum1);  // Sum: 50002896.000000
   
    printf("修正后的版本：\n");
    float sum = 0.0f, corr = 0.0f; /* corrective value for rounding error */
    for (int i = 0; i < 10000; i++) {
      float y = (i + 1) - corr; /* add the correction to specific item */
      float t = sum + y; /* bits might be lost */
      corr = (t - sum) - y; /* recover lost bits */
      sum = t;
    }
    printf("Sum: %f\n", sum); 
   return 0;
}
