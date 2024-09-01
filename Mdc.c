#include <stdio.h>
int maxDivComum(int a, int b) {
 if (b == 0)
  return a;
 else
  return maxDivComum(b, a % b);
}
int main() {
 int num1;
 int num2;
scanf("%d %d", &num1, &num2);
printf("MDC ( %d e %d ) = %d\n", num1, num2, maxDivComum(num1, num2));
 return 0;
}
