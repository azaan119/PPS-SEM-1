#include <stdio.h>
int main() {
int n, i;
float number, sum = 0.0;

printf("Enter the number of elements (n): ");
scanf("%d", &n);
printf("Enter %d numbers:\n", n);
for (i = 1; i <= n; i++) {
printf("Number %d: ", i);
scanf("%f", &number);
sum += number;
    }

printf("The total sum of the %d numbers is: %.2f\n", n, sum);
return 0;
}
