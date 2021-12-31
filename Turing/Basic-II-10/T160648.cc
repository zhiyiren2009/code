#include <iostream>

using namespace std;

size_t fibo(size_t n);

int main() {
    size_t n;
    cin >> n;
    cout << fibo(n) << endl;
    return 0;
}

size_t fibo(size_t n) {
    if (n == 1 || n == 2)
        return 1;
    int x = 0, y = 1, ans = 1;
    for (size_t i = 3; i <= n; i++) {
        x = ans; // 缓存fibo(n-1)
        ans = ans + y; // fibo(n)
        y = x; // fibo(n-1)
    }
    return ans;
}