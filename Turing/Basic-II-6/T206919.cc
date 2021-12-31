#include <iostream>

using namespace std;

char hex[18];

int main() {
    int i = 0;
    while (cin >> ::hex[i])
        i++;
    unsigned long long dec = 0;
    for (int j = 0; j < i; j++) {
        if (::hex[j] >= '0' && ::hex[j] <= '9') {
            dec = dec << 4;
            dec += ::hex[j] - '0' + 0;
        } else {
            dec = dec << 4;
            dec += ::hex[j] - 'A' + 10;
        }
    }
    cout << dec << endl;
    return 0;
}