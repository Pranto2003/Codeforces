// https://codeforces.com/problemset/problem/1829/A

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string codeforces = "codeforces";

    while (t--)
    {
        string s;
        cin >> s;
        int differences = 0;

        for (int i = 0; i < 10; i++)
        {
            if (s[i] != codeforces[i])
            {
                differences++;
            }
        }

        cout << differences << endl;
    }

    return 0;
}
