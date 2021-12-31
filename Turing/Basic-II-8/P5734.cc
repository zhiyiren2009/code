#include <iostream>
#include <string>

using namespace std;

int main() {
    int mode, n, a, b;
    cin >> n;
    string word, str;
    cin >> word;
    for (int i = 0; i < n; i++) {
        cin >> mode;
        if (mode == 1) {
            cin >> str;
            word += str;
            cout << word << endl;
        }
        if (mode == 2) {
            cin >> a >> b;
            word = word.substr(a, b);
            cout << word << endl;
        }
        if (mode == 3) {
            cin >> a >> str;
            word.insert(a, str);
            cout << word << endl;
        }
        if (mode == 4) {
            cin >> str;
            if (word.find(str) != string::npos)
                cout << word.find(str) << endl;
            else
                cout << -1 << endl;
        }
    }
    return 0;
}