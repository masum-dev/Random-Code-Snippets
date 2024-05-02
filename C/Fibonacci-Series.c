// Fibonacci Series
#include <stdio.h>

int fib(int n)
{
    // Base case
    if (n == 0 || n == 1)
    {
        return n;
    }
    // Recursive Case
    return fib(n - 1) + fib(n - 2);
}

int main()
{

    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int result = fib(n);

    printf("%d th term in Fibonacci series: %d\n", n, result);

    return 0;
}