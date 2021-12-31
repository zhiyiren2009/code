#include <iostream>

using namespace std;

const char a[27] = {' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's',
                    't', 'u', 'v', 'w', 'x', 'y', 'z'};

int main() {
    char in = ' ';
    int n = 0;
    cin >> in >> n;
    int res;
    for (int i = 1; i <= 27; i++)
        if (a[i] == in)
            res = i;
    if (res + n <= 27)
        cout << a[res + n] << endl;
    else
        cout << "*" << endl;
    return 0;
}

// score 100