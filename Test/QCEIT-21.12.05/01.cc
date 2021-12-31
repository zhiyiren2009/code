#include <iostream>

using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;
    int num[10000];
    for (int i = 0; i < n; i++)
        cin >> num[i];
    int l, r;
    cin >> l >> r;
    for (int i = 0; i < n; i++)
        if (num[i] >= l && num[i] <= r)
            sum++;
    cout << sum << endl;
    return 0;
}