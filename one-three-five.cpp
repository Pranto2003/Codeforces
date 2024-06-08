// https://codeforces.com/problemset/problem/1958/A

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
        int n;
        cin >> n;

        // Initialize the minimum number of 1-burle coins to a large number
        int min_1_burles = n;

        // Check all possible combinations of 5 and 3 burle coins
        for (int i = 0; i <= n / 5; ++i)
        {
            for (int j = 0; j <= n / 3; ++j)
            {
                int total = i * 5 + j * 3;
                if (total <= n)
                {
                    int remaining = n - total;
                    min_1_burles = min(min_1_burles, remaining);
                }
            }
        }

        results.push_back(min_1_burles);
    }

    for (auto &result : results)
    {
        cout << result << endl;
    }
    return 0;
}
