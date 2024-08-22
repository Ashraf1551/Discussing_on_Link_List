#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main()
{
    int testCases;
    cin >> testCases;
    while (testCases--)
    {
        string a, b;
        cin >> a >> b;

        int pos;
        while ((pos = a.find(b)) != -1)
        {
            a.replace(pos, b.size(), "#");
        }
        cout << a << endl;
    }

    return 0;
}