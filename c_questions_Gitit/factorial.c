#include <stdio.h>
int main()
{
    int n, i;
    unsigned long long factorial = 0;
    //unsigned long long is the same as unsigned long long int. 
    //Its size is platform-dependent, but guaranteed by the C standard (ISO C99) to be at least 64 bits. 

    printf("Enter a number: ");
    scanf("%d",&n);

    // Show error if number is less than 0
    if (n < 1)
        printf("Error! Factorial of a negative number doesn't exist.");

    else
    {
        for(i=1; i<=n; ++i)
        {
            factorial *= i;              // factorial = factorial*i;
        }
        printf("Factorial of %d = %llu", n, factorial);
    }

    return 0;
}
