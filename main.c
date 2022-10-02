1. Write a function to calculate LCM of two numbers.(TSRS).

#include <stdio.h>
int lcm(int, int);
int main()
{
    int x, y;
    printf("Enter two number: ");
    scanf("%d%d", &x, &y);
    printf("%d", lcm(x, y));
    return 0;
}

int lcm(int x, int y)
{
    int t = x > y ? x : y;
    while (1)
    {
        if (t % x == 0 && t % y == 0)
            return t;
        t++;
    }
}

2. Write a function to calculate HCF of two numbers. (TSRS)

#include <stdio.h>
int hcf(int, int);
int main()
{
    int x, y;
    printf("Enter two number: ");
    scanf("%d%d", &x, &y);
    printf("%d", hcf(x, y));
    return 0;
}

int hcf(int x, int y)
{
    int t = x < y ? x : y;
    while (1)
    {
        if (x % t == 0 && y % t == 0)
            return t;
        t--;
    }
}

3. Write a function to check whether a given number is Prime or not. (TSRS)

#include <stdio.h>
int isPrime(int);
int main()
{
    int x;
    printf("Enter number: ");
    scanf("%d", &x);
    printf("%d", isPrime(x));

    return 0;
}

int isPrime(int x)
{
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

4. Write a function to find the next prime number of a given number. (TSRS)

#include <stdio.h>
int nextPrime(int);
int main()
{
    int x;
    printf("Enter number: ");
    scanf("%d", &x);
    printf("%d", nextPrime(x));
    return 0;
}

int nextPrime(int x)
{
    x = x + 1;
    while (1)
    {
        for (int i = 2; i < x; i++)
        {
            if (x % i == 0)
            {
                x++;
                i=1;
                continue;
            }
        }
        return x;
    }
}

5. Write a function to print first N prime numbers (TSRN).
#include <stdio.h>
void listOfPrime(int);
int main()
{
    int x;
    printf("Enter number: ");
    scanf("%d", &x);
    listOfPrime(x);
    return 0;
}

void listOfPrime(int x)
{
    int j, count = 0;
    for (int i = 2; count < x; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {

                break;
            }
        }
        if (i == j)
        {
            count++;
            printf("%d\n", i);
        }
    }
}

6. Write a function to print all Prime numbers between two given numbers. (TSRN).

#include <stdio.h>
void listOfPrime(int, int);
int main()
{
    int x, y;
    printf("Enter two number: ");
    scanf("%d%d", &x, &y);
    listOfPrime(x, y);
    return 0;
}

void listOfPrime(int from, int to)
{
    int j;
    for (int i = from; i < to; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (i == j)
        {
            printf("%d\n", i);
        }
    }
}

7. Write a function to print first N terms of Fibonacci series (TSRN)

#include <stdio.h>
void listOfFibonacci(int);
int main()
{
    int x;
    printf("Enter number: ");
    scanf("%d", &x);
    listOfFibonacci(x);
    return 0;
}

void listOfFibonacci(int x)
{
    int a = 0;
    int b = 1;
    int c, counter=2;
    printf("%d\n",a);
    printf("%d\n",b);

    for (int i = 3; counter < x; i++)
    {
        c = a + b;
        a = b;
        b = c;
        printf("%d\n",c);
        counter++;
    }
}

8. Write a function to print PASCAL Triangle. (TSRN)

#include <stdio.h>

int factorial(int n) {
   int f;
   
   for(f = 1; n > 1; n--)
      f *= n;
      
   return f;
}

int ncr(int n,int r) {
   return factorial(n) / ( factorial(n-r) * factorial(r) );
}

int main() {
   int n, i, j;

   n = 5;

   for(i = 0; i <= n; i++) {
      for(j = 0; j <= n-i; j++)
         printf("  ");
         
      for(j = 0; j <= i; j++)
         printf(" %3d", ncr(i, j));

      printf("\n");
   }
   return 0;
}

9. Write a program in C to find the square of any number using the function.

#include <stdio.h>
int square(int);
int main()
{
    int x;
    printf("Enter number: ");
    scanf("%d", &x);
    printf("%d\n",square(x));
    return 0;
}

int square(int x)
{
    return x * x;
}

10. Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the
function

#include <stdio.h>
int sumSeries(int);
int main()
{
    int x;
    printf("Enter number: ");
    scanf("%d", &x);
    printf("%d\n", sumSeries(x));
    return 0;
}

int sumSeries(int x)
{
    int s = 0;
    int f;
    for (int i = 1; i <= x; i++)
    {
        f = 1;
        for (int j = 2; j < i; j++)
        {
            f = f * j;
        }
        s = s + f;
    }
    return s;
}
