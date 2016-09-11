#include "mymath.cpp"

// palindrome must be divisible 11
int main(int argc, char *argv[])
{
    int max = 0;
    for (int i = 110; i < 1000; i += 11)
        for (int j = 100; j < 1000; j++)
            if (chk_palindrome(i*j))
                if (i*j > max)
                    max = i*j;
    std::cout << max;
    return 0;
}
