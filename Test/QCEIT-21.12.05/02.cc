#include <iostream>
#include <algorithm>

using namespace std;

struct Num {
    long long num;
    int end;

    bool operator<(Num &o) {
        if (end != o.end)
            return end < o.end;
        else
            return num < o.num;
    }
} num[1000];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num[i].num;
        num[i].end = num[i].num % 10;
    }
    sort(num, num + n);
    for (int i = 0; i < n; i++)
        cout << num[i].num << " ";
    return 0;
}