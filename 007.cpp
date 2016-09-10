#include <iostream>
int main(int argc, char *argv[])
{
    int list[10010] = {0};
    list[0] = 2;
    list[1] = 3;
    list[2] = 5;
    int i = 3;
    int n = 7;
    bool state = true;
    while(i < 10001)
    {
        for (int j = 0; j < i; j++) {
            if (n % list[j] == 0)
            {
                state = false;
                break;
            }
        }
        if (state)
            list[i++] = n;
        state = true;
        n += 2;
    }
    std::cout << list[i-1];
    return 0;
}
