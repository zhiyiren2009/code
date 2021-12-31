#include <iostream>
#include <string>

using namespace std;

int main() {
    string word;
    getline(cin, word);
    int sum = 0;
    for (char c: word)
        if (c != ' ')
            sum++;
    cout << sum << endl;
    return 0;
}