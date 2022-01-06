#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n);

long long weird(int n);

int main() {
    int n;
    cin >> n;
    cout << weird(n) << endl;
}

long long weird(int n) {
    long long weirdN = 0;
    if (n == 2) return 1;
    for (int i = 2; i < n; ++i) {
        if (isPrime(i)) {
            weirdN += (i == 2) ? 1 : weird(i);
        }
    }
    return weirdN;
}

bool isPrime(int n) {
    int sqr = sqrt(n);
    for (int i = 2; i <= sqr; ++i)
        if (n % i == 0)
            return false;
    return true;
}