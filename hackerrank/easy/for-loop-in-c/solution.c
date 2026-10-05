#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    char lables[11][6]={"one","two","three","four","five","six","seven","eight",
    "nine","even","odd"};
      int lables_index;
      for(int i=a; i<=b; i++){
        lables_index = i <= 9 ? i - 1 : 9 + i % 2;
        printf("%s\n", lables[lables_index]);
      }
    

    return 0;
}

