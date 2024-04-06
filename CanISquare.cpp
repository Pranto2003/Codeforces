#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<string> results;

    while (t--)
    {
        int a;
        cin >> a;
        vector<int> arr(a);

        long long total = 0; // Use long long to store the total
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
            total += arr[i]; // Accumulate in long long
        }

        bool foundSquare = false;
        for (long long i = 1; i * i <= total; i++)
        { // Use long long for i
            if (i * i == total)
            {
                results.push_back("Yes");
                foundSquare = true;
                break;
            }
        }

        if (!foundSquare)
        {
            results.push_back("No");
        }
    }

    for (const string &str : results)
    {
        cout << str << endl;
    }

    return 0;
}
