#include <iostream>
#include <string>

using namespace std;

struct Student
{
    string name;
    int chinese, math, english;
    bool operator > (Student o)
    {
        return chinese + math + english > o.chinese + o.math + o.english;
    }
}stu[1000];

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> stu[i].name >> stu[i].chinese >> stu[i].math >> stu[i].english;
    int max = 0;
    for (int i = 0; i < n; i++)
        max = stu[i] > stu[max] ? i : max;
    cout << stu[max].name << " " << stu[max].chinese << " " << stu[max].math << " " << stu[max].english;
    return 0;
}