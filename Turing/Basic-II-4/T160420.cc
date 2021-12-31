#include <iostream>
#include <algorithm>

using namespace std;

struct student {
    int id = 0, score = 0;

    void input() {
        cin >> id >> score;
    }

    void output() {
        cout << id << score;
    }

    bool operator<(const student &c) {
        return score > c.score;
    }
};

student stu[110];

int main() {
    int n, k;
    cin >> n >> k;
    student stu[n];
    for (int i = 0; i < n; i++)
        stu[i].input();
    sort(stu, stu + n);
    stu[k - 1].output();
    return 0;
}