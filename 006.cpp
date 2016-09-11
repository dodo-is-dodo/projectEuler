#include "mymath.cpp"

int main()
{
    long rightSum = 0;
    long leftSum = 5050*5050;
    
    for (int i = 1; i < 101; i++)
        rightSum += i*i;
    std::cout << leftSum - rightSum;
    return 0;
}
