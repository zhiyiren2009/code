#include <iostream>
#include <string>
#include <vector>

using namespace std;

int config[3];

int main() {
    cin >> config[0] >> config[1] >> config[2];
    string word = " ";
    cin >> word;

    return 0;
}

string unfold(string str, int cfg1, int cfg2, int cfg3) {
    for (int i = 0, j = 0, pos = 0; i < str.size() && j < str.size(); {
            j = str.find("-", i);
            if (str[j - 1] < str[j + 1]) + 1)
            {
                j++;
            }
    }
}