#include <iostream>

using namespace std;

int main() {
    long long n;
    cin >> n;

    // dec to bin
    bool bin[520];
    int res[520], size = 0;
    while (n) {
        res[++size] = n % 2;
        n /= 2;
    }
    for (int i = size, j = 0; i > 0; i--, j++)
        bin[j] = res[i];
    // end

    int sum = 0;
    for (int i = 0; i < size; i++)
        if (bin[i] == 1)
            sum++;
    cout << sum;

    return 0;
}
