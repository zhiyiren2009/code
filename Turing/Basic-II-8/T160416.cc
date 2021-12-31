#include <iostream>
#include <string>

using namespace std;

string stroupper(string str); // 转大写

int main() {
    string a, b;
    cin >> a >> b;
    a = stroupper(a);
    b = stroupper(b);
    if (a > b)
        cout << ">" << endl;
    if (a < b)
        cout << "<" << endl;
    if (a == b)
        cout << "=" << endl;
    return 0;
}

string stroupper(string str) // 转大写
{
    for (auto &c: str)
        c = toupper(c);
    return str;
}
