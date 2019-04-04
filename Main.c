#include <stdio.h>

int main() {
    float x0 = 1.54; // Initial value of x
    float xn; // Next value of x
    float xnm1; // Previous value of x
    int n = 1; // Counter
    printf("0 %f\n", x0);
while (n < 10) {
    xn = 0.2*x0+5;
    printf("%d %f\n", n, xn);
    x0 = xn;
    xnm1 = 0.2*xn+5;
    n++;
if (xnm1 - xn < 0.0001) {
    break;
}
}
    return 0;
}