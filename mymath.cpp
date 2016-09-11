#include <iostream>
#include <math.h>
#include <string>

bool chk_prime(int n)
{
    if (n < 2)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0  || n % 3 == 0) 
        return false;
    int r = sqrt(n) + 1;
    int i = 5;
    while (i <= r)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
        i += 6;
    }
    return true;
}

int decimal_digit(int n)
{
    if (n == 0)
        return 0;
    int count = 1;
    while (n > 10)
    {
        n /= 10;
        count++;
    }
    return count;
}

bool chk_palindrome(int n)
{
    std::string s = std::to_string(n);
    for (unsigned long i = 0; i < s.length()/2; i++)
    {
        if (s[i] != s[s.length()-i-1])
            return false;
    }
    return true;
}

long gcd(long a, long b)
{
    long tmp;
    while (b)
    {
        tmp = a;
        a = b;
        b = tmp % b;
    }
    return a;
}

long lcm(long a, long b)
{
    return a*b/gcd(a,b);
}

long num_divisors(long n)
{
    long root = floor(sqrt(n)) + 1;
    int count = 0;
    int i;
    for (i = 1; i < root; i++)
        if (n % i == 0)
        {
            count++;
            if (n / i != i)
                count++;
        }
    return count;
}

unsigned int num_collatz(long n)
{
    unsigned int count = 1;
    while (n != 1)
    {
        if (n % 2 == 0)
            n = n/2;
        else
            n = 3*n + 1;
        count++;
    }
    return count;
}

bool chk_pandigital(long n)
{
    std::string s = std::to_string(n);
    int i;
    if (s.length() > 9)
        return false;
    for (i = 1; i <= s.length(); i++)
    {
        if (s.find(std::to_string(i)) == std::string::npos)
            return false;
    }
    return true;
}
