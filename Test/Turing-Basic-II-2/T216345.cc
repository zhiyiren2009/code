#include <iostream>

using namespace std;

int main() {
    unsigned int n = 0;
    cin >> n;
    bool binary[32];
    for (int i = 31; i >= 0; --i) {
        binary[i] = n & 1;
        n = n >> 1;
    }
    for (int i = 16; i < 32; ++i)
        cout << binary[i];
    for (int i = 0; i < 16; ++i)
        cout << binary[i];
//    for (int i = 0; i < 32; ++i)
//        cout << binary[i];
    cout << endl;
    return 0;
}