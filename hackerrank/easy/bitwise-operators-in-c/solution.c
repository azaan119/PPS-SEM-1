#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k){
  //Write your code here.  
    int maxAnd = 0;
    int maxOr  = 0;
    int maxXor = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            int a = i & j;
            int b = i | j;
            int c = i ^ j;

            if (a > maxAnd && a < k) maxAnd = a;
            if (b > maxOr  && b < k) maxOr  = b;
            if (c > maxXor && c < k) maxXor = c;
        }
    }

    printf("%d\n%d\n%d\n", maxAnd, maxOr, maxXor);
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    return 0;
}
