#include <iostream>
#include <math.h>

bool chk_prime(int n)
{
    if (n < 2)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0  || n % 3 == 0) 
        return false;
    int r = sqrt(n) + 1;
    int i = 1;
    while (i <= r)
    {
        if (n % i == 0 || n % i + 4 == 0)
            return false;
        i += 6;
    }
    return true;
}

