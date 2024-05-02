// Series Print using Recursion: 100, 80, 60, 40, 20, 0
#include <stdio.h>

void printSeries(int n)
{
    // Base case
    if (n < 0)
    {
        return;
    }
    printf("%d ", n);

    // Recursive Case
    printSeries(n - 20);
}

int main()
{

    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    printSeries(n);

    return 0;
}