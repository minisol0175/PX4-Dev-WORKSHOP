#include <stdio.h>

void fizzbuzz(int x, int y, int n);

int main(viod)
{
    int i;
    fizzbuzz(2, 3, 7);
    return 0;
}

void fizzbuzz(int x, int y, int n) {
    int i;
    for(i = 1; i <= n; i++)
{
    if(0 == (i % (x*y)))
        printf("FizzBuzz\n");
    else if(0 == (i % x))
        printf("Fizz\n");
    else if(0 == (i % y))
        printf("Buzz\n");
    else
        printf("%d\n",i);
}
