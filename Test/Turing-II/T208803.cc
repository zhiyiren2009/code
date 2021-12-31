#include <iostream>

using namespace std;

int appsum(int x) {
    int i, s = 0;
    for (i = 1; i < x; i++)
        if (x % i == 0)
            s += i;
    return s;
}

int main() {
    int i, j;
    int max, sum = 0;
    cin >> max;
    for (i = 1; i <= max; i++) {
        j = appsum(i); // 因数总和
        if (j > i && appsum(j) == i) {
            cout << i << " " << j << endl;
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}
