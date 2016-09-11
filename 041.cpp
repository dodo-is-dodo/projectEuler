#include "mymath.cpp"

//used backtrack to make permutations.

void swap(char *s, int a, int b)
{
    char temp = s[a];
    s[a] = s[b];
    s[b] = temp;
}

void backtrack(char *s, int k, int n, int* max)
{
    int i;
    if (k == n - 1)
    {
        // std::cout << s << '\n';
        if (chk_prime(std::atoi(s)) && std::atoi(s) > *max)
        {
            // std::cout << i;
            *max = atoi(s);
        }
    }
    for (i = k; i < n; i++)
    {
        swap(s, i, k);
        backtrack(s, k+1, n, max);
        swap(s, k, i);
    }
}
int main(int argc, char *argv[])
{
    int max = 0;
    char s[9];
    int i;
    for (i = 0; i < 9; i++)
    {
        for (int j = 0; j < i+1; j++)
            s[j] = j + '1';
        // std::cout << s << '\n';
        backtrack(s, 0, i+1, &max);

    }
    std::cout << max;
    
    return 0;

}
