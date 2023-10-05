#include <stdio.h>
#include <math.h>

int main()
{
double x, y, h;
x = 0.0;
scanf("%lf", &h);
int n;
n = 2 / h + 1;
while (n)
{
if (x >= 0 && x <= 1)
y = 8 * pow(x, 3) * cos(x);
if (x > 1 && x <= 2)
y = log(1 + sqrt(x)) - cos(x);
printf("%lf %lf\n", x, y);
x += h;
n = n - 1;
}
}