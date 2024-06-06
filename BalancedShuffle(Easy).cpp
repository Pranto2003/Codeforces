// https://codeforces.com/problemset/problem/1970/A1

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

struct ParenInfo
{
    int prefix_balance;
    int position;
    char character;
};

bool compare(const ParenInfo &a, const ParenInfo &b)
{
    if (a.prefix_balance == b.prefix_balance)
    {
        return a.position > b.position;
    }
    return a.prefix_balance < b.prefix_balance;
}

int main()
{
    string s;
    cin >> s;

    int n = s.size();
    vector<ParenInfo> paren_infos(n);

    int balance = 0;

    for (int i = 0; i < n; ++i)
    {
        paren_infos[i] = {balance, i, s[i]};
        if (s[i] == '(')
        {
            balance++;
        }
        else
        {
            balance--;
        }
    }

    sort(paren_infos.begin(), paren_infos.end(), compare);

    string result(n, ' ');
    for (int i = 0; i < n; ++i)
    {
        result[i] = paren_infos[i].character;
    }

    cout << result << endl;

    return 0;
}
