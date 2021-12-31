#include <iostream>
#include <string>

using namespace std;

string strupper(string str);

int main() {
    string word;
    cin >> word;
    cout << strupper(word) << endl;
    return 0;
}

string strupper(string str) // 转大写
{
    for (auto &c: str)
        c = toupper(c);
    return str;
}
