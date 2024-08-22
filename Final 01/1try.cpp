// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define mod 1000000007

// int main()
// {
//     string a, b, c;
//     cin >> a >> b;
//     int n = b.size();
//     for (int i = 0; i < a.size(); i++)
//     {
//         string s = a.substr(i, n);
//         if (s == b)
//         {
//             c += '*';
//             i += n - 1;
//         }
//         else
//             c += a[i];
//     }
//     cout << c << endl;

//     return 0;
// }
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
        string a, b, c;
        cin >> a >> b;

        while (a.find(b) != -1)
        {
            a.replace(a.find(b), b.size(), "#");
        }
        cout << a << endl;
        return 0;
    }
}
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string a, b;
//     cin >> a >> b;
//     int n = b.size();
//     string result;

//     for (int i = 0; i < a.size(); i++)
//     {
//         // Check if the substring of length n starting from i matches b
//         if (a.substr(i, n) == b)
//         {
//             result += '*'; // Add '*' to the result
//             i += n - 1; // Skip the next n-1 characters
//         }
//         else
//         {
//             result += a[i]; // Add the current character to the result
//         }
//     }

//     cout << result << endl;

//     return 0;
// }
