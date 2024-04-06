#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    vector<int> results;
    while (t--)
    {
        vector<int> coords(8);
        for (int i = 0; i < 8; i++)
        {
            cin >> coords[i];
        }

        vector<int> distances;
        for (int i = 0; i < 8; i += 2)
        {
            int dx = coords[(i + 2) % 8] - coords[i];
            int dy = coords[(i + 3) % 8] - coords[i + 1];
            distances.push_back(dx * dx + dy * dy);
        }

        int result = sqrt(*min_element(distances.begin(), distances.end()));
        result *= result;
        results.push_back(result);
    }

    for (const auto &result : results)
    {
        cout << result << endl;
    }

    return 0;
}
