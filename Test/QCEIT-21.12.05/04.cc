#include <iostream>

using namespace std;

bool map1[100][100];
bool map2[100][100];

int main() {
    int m, n;
    cin >> m >> n;

    for (int iM = 0; iM < m; iM++)
        for (int iN = 0; iN < n; iN++)
            cin >> map1[iM][iN];

    for (int iM = 0; iM < m; iM++)
        for (int iN = 0; iN < n; iN++) {
            cin >> map2[iM][iN];
            map2[iM][iN] = map2[iM][iN] || map1[iM][iN];
        }

    for (int iM = 0; iM < m; iM++) {
        for (int iN = 0; iN < n; iN++)
            cout << map2[iM][iN] << " ";
        cout << endl;
    }
    return 0;
}