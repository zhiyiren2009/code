#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct student {
    int id = 0, x1 = 0, x2 = 0, x3 = 0, sum = 0;

    void get_sum() {
        sum = x1 + x2 + x3;
    }

    bool operator<(student &stu2) {
        get_sum();
        stu2.get_sum();
        if (sum > stu2.sum)
            return true;
        if (x1 > stu2.x1)
            return true;
        if (x2 > stu2.x2)
            return true;
        if (x3 > stu2.x3)
            return true;
        return false;
    }
};

int main() {
    vector <student> stu;
    int n = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        student tmp;
        cin >> tmp.x1 >> tmp.x2 >> tmp.x3;
        tmp.get_sum();
        tmp.id = i + 1;
        stu.push_back(tmp);
    }
    sort(stu.begin(), stu.end());
    for (auto &c: stu)
        cout << c.id << " " << c.sum << endl;
    return 0;
}