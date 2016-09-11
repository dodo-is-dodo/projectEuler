#include "mymath.cpp"

//if I memoize the history of collatz, it will be more faster
//but who cares? I'm not in mood to do that
int main(int argc, char *argv[])
{
    int i;
    unsigned int max = 0;
    unsigned int max_i;
    for (i = 1; i < 1000000; i++)
        if (num_collatz(i) > max)
        {
            max = num_collatz(i);
            max_i = i;
        }
    std::cout << max_i;
    return 0;
}
