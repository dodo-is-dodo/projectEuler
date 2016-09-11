#include <iostream>
int main(int argc, char *argv[])
{
    // get idea about sieve
    long limit = 2000000;
    char list[2000000] = {0};
    long sum = 2;
    long n = 3;
    long i;
    while (n < limit)
    {
        if (list[n] == 0)
        {
            sum += n;
            for (i = n; i < limit; i += n)
                list[i] = 1;
        }
        n += 2;
    }
    std::cout << sum;
    
        

    

// my original solution
    
    // long list[100000] = {0};
    // list[0] = 2;
    // list[1] = 3;
    // list[2] = 5;
    // long i = 3;
    // long n = 7;
    // long sum = 10;
    // bool state = true;
    // while(n < 2000000)
    // {
    //     for (long j = 0; j < i; j++) {
    //         if (n % list[j] == 0)
    //         {
    //             state = false;
    //             break;
    //         }
    //     }
    //     if (state)
    //     {
    //         list[i++] = n;
    //         sum += n;
    //     }
    //     state = true;
    //     n += 2;
    // }
    // std::cout << sum;
    // return 0;
}

// another way

// #include <iostream>
// #include <bitset>

// using namespace std;

// int main()
// {
//    bitset[lt]1000000[gt] Sieve;
//    __int64 sum = 0;
        
//    Sieve.flip();      // Set all bits to 1
//    Sieve[0].flip();   // Set 0 and 1 to not prime
//    Sieve[1].flip();

//    // Check all nos from 2 to 1 million
//    for(long i = 2; i < 1000000; ++i)
//    {
//       if( ! Sieve[i] )   // If marked not prime
//          continue;      // return to head of loop
//       else
//          // Set all multiples as not prime
//          for(long j = 2*i; j < 1000000; j += i)
//             Sieve[j] = 0; 
//    }

//    for(long i = 2; i < 1000000; ++i)
//       if( Sieve[i] )   // Add all nos with bit set
//          sum += i;

//    cout << "\nThe sum is : "  << sum << endl;

//    return 0;
// }

// Here is a solution that is more efficient than the sieve of Eratosthenes. It is derived from similar algorithms for counting primes. The advantage is that there is no need to find all the primes to find their sum.

// The main idea is as follows: Let S(v,m) be the sum of integers in the range 2..v that remain after sieving with all primes smaller or equal than m. That is S(v,m) is the sum of integers up to v that are either prime or the product of primes larger than m. 

// S(v, p) is equal to S(v, p-1) if p is not prime or v is smaller than p*p. Otherwise (p prime, p*p<=v) S(v,p) can be computed from S(v,p-1) by finding the sum of integers that are removed while sieving with p. An integer is removed in this step if it is the product of p with another integer that has no divisor smaller than p. This can be expressed as

// S(v,p)=S(v,p−1)−p(S(v/p,p−1)−S(p−1,p−1)).S(v,p)=S(v,p−1)−p(S(v/p,p−1)−S(p−1,p−1)).

// Dynamic programming can be used to implement this. It is sufficient to compute S(v,p) for all positive integers v that are representable as floor(n/k) for some integer k and all p≤v√p≤v.
