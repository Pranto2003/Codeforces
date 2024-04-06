//https : // codeforces.com/problemset/problem/1879/A

#include <iostream>
#include <vector>
        using namespace std;

int main()
{
    int size; // Number of test cases
    cin >> size;

    vector<int> results;

    while (size--)
    {
        int n; // Number of athletes for the current test case
        cin >> n;

        int maxsize = n * 2;
        int arr[maxsize];
        bool wins = true;

        for (int i = 0; i < maxsize; i++)
        {
            cin >> arr[i];
        }

        int weight = arr[0];
        int endurance = arr[1];

        for (int i = 2; i < maxsize; i += 2)
        {
            int othersstrength = arr[i];
            int othersendurance = arr[i + 1];
            if (othersstrength >= weight && othersendurance >= endurance)
            {
                wins = false;
                break;
            }
        }

        if (wins)
        {
            results.push_back(weight);
        }
        else
        {
            results.push_back(-1);
        }
    }

    for (int i : results)
    {
        cout << i << endl;
    }

    return 0;
}
