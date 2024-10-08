#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
};

bool cmp(Student a, Student b)
{
    int totalMarks_a, totalMarks_b;

    totalMarks_a = a.math_marks + a.eng_marks;
    totalMarks_b = b.math_marks + b.eng_marks;
    
    if (totalMarks_a == totalMarks_b)
    {
        return a.id < b.id;
    }
    else
    {
        return totalMarks_a > totalMarks_b;
    }
}

int main()
{
    int n;
    cin >> n;

    Student a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id >> a[i].math_marks >> a[i].eng_marks;
    }

    sort(a, a + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].s
             << " " << a[i].id << " " << a[i].math_marks << " "
             << a[i].eng_marks << endl;
    }

    return 0;
}
