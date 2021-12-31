#include <iostream>

using namespace std;

signed long long list[1010];

int main() {
    signed long long in = 0;
    long long n = 0;
    cin >> n;
    for (long long i = 1; i <= n; i++) {
        cin >> in;
        list[i] = in;
    }
    signed long long find_data = 0;
    cin >> find_data;
    long long res = 0;
    for (long long i = 1; i <= n; i++) {
        if (list[i] == find_data) {
            res = i;
            break;
        } else
            res = -1;
    }
    cout << res << endl;
    return 0;
}

//score 100