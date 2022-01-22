#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;
bool isPrime(int n);

int main()
{
    int n = 0, tmp;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &tmp);
        if (isPrime(tmp))
            printf("%d ", tmp);
    }
    return 0;
}

bool isPrime(int n)
{
    int sqr = sqrt(n);
    for (int i = 2; i < sqr; i++)
        if (n % i == 0)
            return false;
    return true;
}