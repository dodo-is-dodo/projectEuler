#include <iostream>
#include "mymath.cpp"

using namespace std;

int main(int argc, char *argv[])
{
    int tri = 1;
    int i = 2;
    while (num_divisors(tri) <= 500)
        tri += i++;
    cout << tri;
    return 0;
}
