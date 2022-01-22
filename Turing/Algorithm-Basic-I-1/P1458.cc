#include <iostream>
#include <algorithm>
#include <cstdio>
#include <vector>

using namespace std;
inline int gcd(int a, int b);

struct num
{
    int denominator, molecular;
    bool operator < (num o)
    {
        return (double)molecular / denominator < (double)o.molecular / o.denominator;
    }
};

int main()
{
    int n, a, b;
    scanf("%d", &n);
    printf("0/1\n");
    vector<num> nums;
    for (int i = 1; i <= n; i++) // denominator
        for (int j = 1; j <= i; j++) // molecular
            if (gcd(i, j) == 1) {
                num tmp;
                tmp.denominator = i, tmp.molecular = j;
                nums.push_back(tmp);
            }
    sort(nums.begin(), nums.end());
    for (auto c : nums)
        printf("%d/%d\n", c.molecular, c.denominator);
    return 0;
}

inline int gcd(int a, int b)
{
    return !b ? a : gcd(b, a % b);
}