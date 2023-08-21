#include <stdio.h>
#include <math.h>

int main(void)
{
    long int n = 612852475143;
    long int maxprime = -1;

    /* Divide the number by 2 until it becomes odd */
    while (n % 2 == 0)
    {
        maxprime = 2;
        n = n / 2;
    }

    /* Try dividing by odd numbers starting from 3 */
    long int i;
    for (i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            maxprime = i;
            n = n / i;
        }
    }

    if (n > 2)
    {
        maxprime = n;
    }

    printf("%ld\n", maxprime);
    return 0;
}
