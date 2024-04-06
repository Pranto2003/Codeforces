// https://codeforces.com/problemset/problem/1873/B

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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        long long maxProduct = 1;
        for (int val : arr)
            maxProduct *= val;

        for (int i = 0; i < n; i++)
        {
            long long tempProduct = 1;
            for (int j = 0; j < n; j++)
            {
                if (j == i)
                    tempProduct *= (arr[j] + 1);
                else if (j > i)
                    tempProduct *= arr[j];
                else
                    tempProduct *= arr[j];
            }
            maxProduct = max(maxProduct, tempProduct);
        }

        results.push_back(maxProduct);
    }

    for (int res : results)
    {
        cout << res << endl;
    }

    return 0;
}
