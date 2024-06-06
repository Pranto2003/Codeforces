// https://codeforces.com/problemset/problem/1971/B

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<string> results;

    while (t--)
    {
        string s;
        cin >> s;
        string original = s;
        sort(s.begin(), s.end());

        if (s == original)
        {
            bool allSame = true;
            for (int i = 1; i < s.length(); i++)
            {
                if (s[i] != s[0])
                {
                    allSame = false;
                    break;
                }
            }
            if (allSame)
            {
                results.push_back("NO");
            }
            else
            {
                next_permutation(s.begin(), s.end());
                results.push_back("YES");
                results.push_back(s);
            }
        }
        else
        {
            results.push_back("YES");
            results.push_back(s);
        }
    }

    for (const string &result : results)
    {
        cout << result << endl;
    }

    return 0;
}
