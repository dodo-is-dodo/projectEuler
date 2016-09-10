#include <iostream>

int main(int argc, char *argv[])
{
    int fib[2] = {1, 1};
    int state = 0;
    int sum = 0;
    while(1)
    {
        fib[state] = fib[0] + fib[1];
        if(fib[state] >= 4000000)
            break;
        if (fib[state] % 2 == 0)
            sum += fib[state];
        state ^= 1;
    }
    std::cout << sum;

    
    return 0;
}
