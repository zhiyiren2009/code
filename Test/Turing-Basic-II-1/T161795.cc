#include <iostream>
#include <algorithm>

using namespace std;

struct Student {
    int n, AS, QDS, score;

    void updateScore() {
        score = AS * 0.7 + QDS * 0.3;
    }

    bool operator < (Student o) {
        if (score != o.score)
            return score > o.score;
        return n < o.n;
    }
};

int main() {
    int n;
    cin >> n;
    Student stu[n];
    for (int i = 0; i < n; ++i) {
        cin >> stu[i].n >> stu[i].AS >> stu[i].QDS;
        stu[i].updateScore();
    }
     sort(stu, stu + n);
    int cnt = 0;
    for (int i = 0; i < n; ++i)
        if (stu[i].AS >= 85 && stu[i].QDS >= 75 && stu[i].score >= 80) {
            cout << stu[i].n << " " <<stu[i].score << endl;
            ++cnt;
        }
    cout << cnt << endl;
    return 0;
}