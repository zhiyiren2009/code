#include <iostream>

using namespace std;

int main() {
    int n = 0, tmp = 0, c = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        scanf("%d", &c);
        tmp ^= c;
    }
    cout << tmp << endl;
    return 0;
}