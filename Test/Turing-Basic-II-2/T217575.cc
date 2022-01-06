#include <iostream>
#include <string>

using namespace std;
const char num[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

string transform(long long n, int m);

int main() {
    long long n;
    int m;
    cin >> n >> m;
    if (n == 0) cout << 0 << endl;
    else cout << transform(n, m) << endl;
}

string transform(long long n, int m) {
    string sNum = "";
    while (n != 0) {
        sNum += num[n % m];
        n /= m;
    }
    for (size_t i = 0, j = sNum.size() - 1; i < j; i++, j--)
        swap(sNum[i], sNum[j]);
    return sNum;
}