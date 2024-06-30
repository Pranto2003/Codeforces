// https://codeforces.com/problemset/problem/1986/A

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<int> results;

    while (t--)
    {
        int x1, x2, x3;
        cin >> x1 >> x2 >> x3;

        vector<int> points = {x1, x2, x3};

        sort(points.begin(), points.end());

        int median = points[1];

        int total_distance = abs(points[0] - median) + abs(points[1] - median) + abs(points[2] - median);

        results.push_back(total_distance);
    }

    for (auto &result : results)
    {
        cout << result << endl;
    }

    return 0;
}
