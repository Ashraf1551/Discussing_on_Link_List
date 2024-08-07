#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main()
{
    char s[100001];

    while (cin.getline(s, 100001))
    {
        //int length = strlen(s);

        sort(s, s + strlen(s));
        for (int i = 0; i < strlen(s); ++i)
        {
            if (s[i] != ' ')
            {
                cout << s[i];
            }
        }
        cout << endl;
    }

    return 0;
}