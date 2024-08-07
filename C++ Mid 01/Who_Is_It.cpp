#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

class Student
{
public:
    int id;
    char name[101];
    char section;
    int totalMarks;
};

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        Student students[3];
        int highestMarks = -1;
        int countHighestScorers = 0;
        Student highestScorer;

        for (int i = 0; i < 3; ++i)
        {
            cin >> students[i].id >> students[i].name >> students[i].section >> students[i].totalMarks;

            if (students[i].totalMarks > highestMarks)
            {
                highestMarks = students[i].totalMarks;
                countHighestScorers = 1;
                highestScorer = students[i];
            }
            else if (students[i].totalMarks == highestMarks)
            {
                countHighestScorers++;
                if (students[i].id < highestScorer.id)
                {
                    highestScorer = students[i];
                }
            }
        }

        cout << highestScorer.id << " " << highestScorer.name << " " << highestScorer.section << " " << highestScorer.totalMarks << endl;
    }

    return 0;
}
