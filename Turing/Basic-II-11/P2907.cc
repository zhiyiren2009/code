#include <iostream>

using namespace std;

int cow(int n, int k);

int main() {
    int n, k;
    cin >> n >> k;
    cout << cow(n, k) << endl;
    return 0;
}

int cow(int n, int k) {
    if (n - k > 0 && (n - k) % 2 == 0)
        return cow((n + k) / 2, k) + cow((n - k) / 2, k);
    return 1;
}