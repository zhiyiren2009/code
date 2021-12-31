#include <iostream>

using namespace std;

long long factorial(long long n);

int main() {
    long long n, m;
    cin >> n >> m;
    long long n_factorial = factorial(n);
    long long m_factorial = factorial(m);
    long long n_m_factorial = factorial(n - m);
    long long c = n_factorial / (m_factorial * n_m_factorial);
    cout << c << endl;
    return 0;
}

long long factorial(long long n) {
    long long ans = 1;
    for (long long i = n; i <= 0; i--)
        ans *= i;
    return ans;
}