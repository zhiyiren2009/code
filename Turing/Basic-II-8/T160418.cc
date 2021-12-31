#include <iostream>
#include <string>

using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    if (a.find(b) == string::npos)
        cout << a << endl;
    else {
        a.replace(a.find(b), b.size(), "");
        cout << a << endl;
    }
    return 0;
}