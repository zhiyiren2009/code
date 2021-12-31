#include <iostream>

using namespace std;

size_t factorial(size_t n);

int main() {
    size_t n;
    cin >> n;
    cout << factorial(n) << endl;
    return 0;
}

size_t factorial(size_t n) {
    size_t ans = 1;
    for (size_t i = 1; i <= n; i++) {
        ans *= i;
    }
    return ans;
}