#include <iostream>

using namespace std;

char c[105];

int main() {
    int i = 0;
    while (cin >> c[i]) {
        i++;
    }
    for (int j = 0; j <= i && c[j] != 0; j++)
        cout << toupper(c[j]) - 'A' + 1;
    cout << endl;
    return 0;
}