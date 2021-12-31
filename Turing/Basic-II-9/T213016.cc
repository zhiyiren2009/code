#include <iostream>
#include <string>

using namespace std;

int main() {
    string word, find, replace;
    cin >> word >> find >> replace;
    for (int pos = 0; pos < word.size();) {
        word.replace(word.find(find, pos), replace.size(), replace);
        pos = word.find(find, pos);
    }
    cout << word << endl;
    return 0;
}