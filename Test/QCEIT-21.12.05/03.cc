#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    getline(cin, str);
    for (size_t pos = 0;;)
        if (str.find("  ", pos) != string::npos) {
            pos = str.find("  ", pos);
            str.replace(pos, 2, " ");
        } else
            break;
    cout << str << endl;
}