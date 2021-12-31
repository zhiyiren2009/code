#include <iostream>

using namespace std;

size_t pell(size_t n);

int main() {
    size_t k;
    cin >> k;
    cout << pell(k) % 32767 << endl;
}

size_t pell(size_t n) {
    if (n == 1 || n == 2)
        return n;
    return 2 * pell(n - 1) + pell(n - 2);
}
