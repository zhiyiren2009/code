#include <iostream>
#include <cstdio>

using namespace std;

int ans[1000];
int a[1000];
int b[1000][1000];
int c[1000];
int n, m, minn = 100000000;

bool pd(int x)
{
    for (int i = 1; i <= n; i++) {
        int sum = 0;
        for (int j = 1; j <= x; j++)
            sum += b[c[j]][i];
        if (sum < a[i])
            return false;
    }
    return true;
}

void search(int t, int s)
{
    if (t > m)
    {
        if (pd(s))
            if (s < minn)
            {
                minn = s;
                for (int i = 1; i <= minn; i++)
                    ans[i] = c[i];
            }
        return;
    }
    c[s + 1] = t;
    search(t + 1, s + 1);
    c[s + 1] = 0;
    search(t + 1, s);
}

int main()
{
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &m);
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            scanf("%d ", &b[i][j]);
    search(1, 0);
    printf("%d ", minn);
    for (int i = 1; i <= minn; i++)
        printf("%d ", ans[i]);
    return 0;
}