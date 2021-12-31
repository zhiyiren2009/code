#include <iostream>
#define arraySize 1025

using namespace std;
int peo[arraySize][arraySize];
void release(int a, int x, int y);

int main() {
    int n;
    cin >> n;
    int l = 1 << n;
    release(l, 1, 1);
    for (int i = 1; i <= l; ++i) {
        for (int j = 1; j <= l; ++j)
            cout << (peo[i][j] == false) << " ";
        cout << endl;
    }
    return 0;
}

void release(int a, int x, int y) {
    if (a == 1) return;
    int na = a / 2;
    for (int i = x; i < x + na; i++)
        for (int j = y; j < y + na; j++)
            peo[i][j] = true;
    release(na, x, y + na);
    release(na, x + na, y);
    release(na, x + na, y + na);
}