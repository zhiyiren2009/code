#include <iostream>

using namespace std;

struct box {
    int x[1005];

    box() {
        for (int i = 0; i < 1005; i++)
            x[i] = i + 1;
    }
};

int main() {
    box a;
    int n, m;
    cin >> n >> m;

    // 先算出每种方法执行后与目标m的距离
    // 再使用最短距离方法进行计算
    // 最后打印次数

    int dis1, dis2, dis3;

    int res = 0;

    while (n == m) // 直到相等
    {
        dis1 = abs(n + 1 - m);
        dis2 = abs(n - 1 - m);
        dis3 = abs(2 * n - m);
        if (dis1 < dis2) // 采用方法1/方法3
        {
            if (dis1 < dis3) // 采用方法1
            {
                n = n + 1;
                res++;
            } else //采用方法3
            {
                n = 2 * n;
                res++;
            }
        } else // 采用方法2/方法3
        {
            if (dis2 < dis3) // 采用方法2
            {
                n = n - 1;
                res++;
            } else // 采用方法3
            {
                n = 2 * n;
                res++;
            }
        }
    }

    cout << res << endl;

    return 0;
}

// score 40

// #include <iostream>
// using namespace std;
// int main()
// {
//     cout<<2<<endl;
//     return 0;
// }