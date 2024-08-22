// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define mod 1000000007

// int main()
// {
//     string s;
//     getline(cin, s);

//     if (s.find("Jessica") != -1)
//     {
//         cout << "YES" << endl;
//     }
//     else
//     {
//         cout << "NO" << endl;
//     }

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define mod 1000000007

// int main()
// {
//     string s;
//     getline(cin, s);

//     stringstream ss(s);
//     string word;

//     int count = 0;
//     while (ss >> word)
//     {
//         if (word == "Jessica")
//         {
//             count = 1;
//             break;
//         }
//     }
//     if (count)
//     {
//         cout << "YES";
//     }
//     else
//     {
//         cout << "NO";
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main()
{
    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;

    int count = 0;
    while (ss >> word)
    {
        if (word == "Jessica")
        {
            cout << "YES";
            count = 1;
            break;
        }
    }
    if (count == 0)
        cout << "NO";
    // if (count)
    // {
    //     cout << "YES";
    // }
    // else
    // {
    //     cout << "NO";
    // }
    // return 0;
}
