#include <iostream>
#include <cstdio>
#include <string>
#include <map>

using namespace std;
void initKeysMap();
map<char,int> ma;

int main()
{
    initKeysMap();
    string s;
    getline(cin, s);
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
        ans += ma[s[i]];
    printf("%d", ans);
    return 0;
}

void initKeysMap()
{
    ma['a'] = 1;
    ma['b'] = 2;
    ma['c'] = 3;
    ma['d'] = 1;
    ma['e'] = 2;
    ma['f'] = 3;
    ma['g'] = 1;
    ma['h'] = 2;
    ma['i'] = 3;
    ma['j'] = 1;
    ma['k'] = 2;
    ma['l'] = 3;
    ma['m'] = 1;
    ma['n'] = 2;
    ma['o'] = 3;
    ma['p'] = 1;
    ma['q'] = 2;
    ma['r'] = 3;
    ma['s'] = 4;
    ma['t'] = 1;
    ma['u'] = 2;
    ma['v'] = 3;
    ma['w'] = 1;
    ma['x'] = 2;
    ma['y'] = 3;
    ma['z'] = 4;
    ma[' '] = 1;
    ma['*'] = 1;
    ma['#'] = 1;
}