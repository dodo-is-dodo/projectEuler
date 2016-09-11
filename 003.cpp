#include "mymath.cpp"

int main(int argc, char *argv[])
{
    long n = 600851475143;
    long r = sqrt(n) + 1;
    int i = 9;
    int ans = i;
    while (i <= r)
    {
        if (n % i == 0 && chk_prime(i))
            ans = i;
        i += 2;
    }
    std::cout << ans;
    return 0;
}
