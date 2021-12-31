#include <iostream>
#include <string>

#define max 100

using namespace std;

int main() {
    string word;
    int n, x[max], y[max];
    cin >> word >> n;
    for (int i = 0; i < n && i < max; i++)
        cin >> x[i] >> y[i];
    for (int i = 0; i < n && i < max; i++) {
        string sub = word.substr(x[i] - 1, y[i] - x[i] + 1), sub2 = "";
        for (int j = 0; j < sub.size(); j++) {
            sub2.insert(0, 1, sub[j]);
        }
        word.replace(x[i] - 1, sub2.size(), sub2);
    }
    cout << word << endl;
    return 0;
}