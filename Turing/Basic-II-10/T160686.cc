#include <iostream>

using namespace std;

size_t gcd(size_t a, size_t b);

int main() {
    size_t a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;
    return 0;
}

size_t gcd(size_t a, size_t b) {
    return b ? gcd(b, a % b) : a;
}