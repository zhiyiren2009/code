#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long n;
    cin >> n;

    // dec to bin
    bool bin[50];
    int res[50], size = 0;
    while (n) {
        res[size++] = n % 2;
        n /= 2;
    }
    // end

    int i;
    for (i = 0; res[i] == 0; i++);
    cout << (int) pow(2, i) << endl;
    return 0;
}