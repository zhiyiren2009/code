#include <iostream>
#include <string>

using namespace std;

int main()
{
    string in, letter = "", num = "";
    cin >> in;
    for (size_t i = 0; i < in.size(); ++i) {
        if (isalpha(in[i]))
            letter += in[i];
        else
            num += in[i];
    }
    cout << letter + num << endl;
    return 0;
}