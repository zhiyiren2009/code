#include <iostream>
#include <algorithm>

using namespace std;

struct Student {
    string name;
    int score, i;

    bool operator<(Student &o) {
        return score != o.score ? score > o.score : i < o.i;
    }
};

int main() {
    int n;
    cin >> n;
    Student stu[n];
    for (size_t i = 0; i < n; ++i) {
        cin >> stu[i].name >> stu[i].score;
        stu[i].i = i;
    }
    sort(stu, stu + n);
    for (size_t i = 0; i < n; ++i)
        cout << stu[i].name << " " << stu[i].score << endl;
    return 0;
}