#include <iostream>
#include <string>

using namespace std;

string str_toupper(string str);

int main() {
    string line = " ", find = " ";
    size_t location = 0, sum = 0;
    cin >> find;
    find = " " + find + " ";
    cin.ignore(); // 清空缓冲区
    getline(cin, line);
    line = " " + line + " ";
    line = str_toupper(line);
    find = str_toupper(find);
    size_t pos = 0;
    while (line.find(find, pos) != string::npos) {
        sum++;
        pos = 1 + line.find(find, pos);
    }
    if (line.find(find) != string::npos)
        cout << sum << " " << line.find(find) << endl;
    else
        cout << -1 << endl;
    return 0;
}

string str_toupper(string str) // 转大写
{
    for (auto &c: str)
        c = toupper(c);
    return str;
}
