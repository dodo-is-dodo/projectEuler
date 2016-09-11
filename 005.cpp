#include "mymath.cpp"

int main(int argc, char *argv[])
{
    long sum = 1;
    for (long i = 2; i < 21; i++)
        sum = lcm(sum, i);
    std::cout << sum;

    // int i;
    // int t=0;
    // for (i=1;;i++)
    // {
    //     if ((i%11)==0 && (i%12)==0&&(i%13)==0 && (i%14)==0 && (i%15)==0 && (i%16)==0 && (i%17)==0 && (i%18)==0 && (i%19)==0 && (i%20)==0) break;
    // }
    // std::cout<<i;
    return 0;
}
