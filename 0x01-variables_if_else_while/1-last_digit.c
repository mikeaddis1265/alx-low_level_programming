#include <stdlib.h>
#include<stdio.h>
#include <time.h>
/*
 *main - Starting point
 *Descriptions : getting the last digit of the random number
 *Return: 0
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if(n>=0)
{
    if(n%10>5)
    {
        printf("Last digit of %d is %d and is greater than 5",n,n%10);
    }
    else if(n%10==0)
    {
        printf("Last digit of %d is -%d and is 0",n,n%10);
    }
    else if(n%10<6 && n%10 !=0)
    {
        printf("Last digit of %d is %d and is less than 6 and not 0",n,n%10);
    }    
}
else
{   
    int x=0-(n%10);
    if((n%10)>5)
    {
        printf("Last digit of %d is -%d and is greater than 5",n,x);
    }
    else if(-(n%10)==0)
    {
        printf("Last digit of %d is -%d and is 0",n,x);
    }
    else if(-(n%10)<6 && -(n%10) !=0)
    {
        printf("Last digit of %d is -%d and is less than 6 and not 0",n,x);
    }      
}
return (0);
}