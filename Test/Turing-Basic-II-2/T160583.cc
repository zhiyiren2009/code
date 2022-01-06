#include <iostream>
#include <cctype>

using namespace std;

string transform1(string s);

string transform2(string s);

int main() {
    int n = 0;
    cin >> n;
    string firstName, lastName;
    for (size_t i = 0; i < n; ++i) {
        cin >> firstName >> lastName;
        cout << transform1(firstName) << " " << transform2(lastName) << endl;
    }

    return 0;
}

string transform2(string s) {
    s[0] = toupper(s[0]);
    for (size_t i = 1; i < s.size(); ++i)
        s[i] = tolower(s[i]);
    return s;
}

string transform1(string s) {
    for (size_t i = 0; i < s.size(); ++i)
        s[i] = toupper(s[i]);
    return s;
}