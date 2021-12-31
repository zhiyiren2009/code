#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    return 0;
}

string f(string s) {
    if (s.size() > 1) {
        for (int i = 0, j = s.size() - 1; i < j; ++i, --j) {
            swap(s[i], s[j]);
        }
        return f(s.substr(0, s.size() / 2)) + f(s.substr(s.size() / 2, s.size() / 2));
    }
    else
        return s;
}