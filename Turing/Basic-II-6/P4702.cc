#include <iostream>

using namespace std;

int main() {
    int tmp, sum = 0, n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        sum += tmp;
    }
    if (sum & 1) // 只要是偶数 Alice 就赢了
        cout << "Alice" << endl;
    else // 这里就是奇数， Bob 赢了
        cout << "Bob" << endl;
    return 0;
}