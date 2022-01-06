#include <iostream>
#include <sstream>
#include <string>

using namespace std;

unsigned gcd(int a, int b)
{
    return b > 0 ? gcd(b, a % b) : a;
}

int main()
{
    unsigned a, b; string in;
    cin >> in;
    in.replace(in.find("/"), 1, " ");
    stringstream ss;
    ss << in;
    ss >> a >> b;
    if (a == 0) cout << a << "/" << b << endl;
    else cout << a / gcd(a, b)<< "/" << b / gcd(a, b) << endl;
    return 0;
}