 *
 * main -entry point
 *
 * Return -always 0
 *
 */

int main(void)
{
        unsigned int long n = 612852475143;
         unsigned int long  maxprime = -1;

        /*divide the nummber by 2 until it becomes odd*/

        while (n % 2 == 0)
        {
                maxprime = 2;
                n = n / 2;
        }

        /*try dividing by odd numbers starting from 3*/

        int i = 3;
        for (; i <= sqrt(n); i = i + 2)
        {
                while(n % i == 0)
                {
                        maxprime = i;
                        n = n / i;
                }

        }
         if (n > 2)
        {
            maxprime = n;
        }

        printf("%lu\n", maxprime);
return (0);
}
