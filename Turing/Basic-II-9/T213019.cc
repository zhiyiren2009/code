#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    for (int pos = 0; pos < s1.size();) {
        if (string::npos != s1.find(' ', pos)) {
            pos = s1.find(' ', pos);
            s1.
            delete (pos, 1);
        }
    }
    for (int pos = 0; pos < s2.size();) {
        if (string::npos != s2.find(' ', pos)) {
            pos = s2.find(' ', pos);
            s2.
            delete (pos, 1);
        }
    }
    if (s1 == s2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}