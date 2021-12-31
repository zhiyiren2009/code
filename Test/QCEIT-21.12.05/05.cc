#include <iostream>
#include <string>

using namespace std;

struct Book {
    int isbn;
    string another; // 作者
};

int anotherBook[26]; // 出书数量

int main() {
    int m;
    cin >> m;
    Book book[m];
    for (int i = 0; i < m; i++)
        cin >> book[i].isbn >> book[i].another;
    for (int i = 0; i < m; i++) {
        for (char c: book[i].another)
            ++anotherBook[c - 'A']; // 增加数量
    }
    char maxID = anotherBook[0];
    for (int i = 0; i < 26; i++)
        if (anotherBook[i] > anotherBook[maxID])
            maxID = i;
    maxID += 'A';
    cout << maxID << "\n"
         << anotherBook[maxID - 'A'] << endl;

    for (Book c: book) {
        if (c.another.find(maxID) != string::npos)
            cout << c.isbn << endl;
    }
    return 0;
}