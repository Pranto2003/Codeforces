#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<int> results;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (a == b)
        {
            results.push_back(c);
        }
        else if (a == c)
        {
            results.push_back(b);
        }
        else
        {
            results.push_back(a);
        }
    }

    for (auto const &result : results)
    {
        cout << result << endl;
    }

    return 0;
}