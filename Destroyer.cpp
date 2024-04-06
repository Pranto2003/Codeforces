#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<string> results;
    while (t--)
    {
        int size;
        cin >> size;
        int *arr = new int[size];
        bool zero = false, one = false, two = false;
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + size);
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == 0)
            {
                zero = true;
            }
            else if (arr[i] == 1)
            {
                one = true;
            }
            else if (arr[i] == 2)
            {
                two = true;
            }
        }
        if (zero == true && one == true && two == true)
        {
            results.push_back("Yes");
        }
        else if (zero == true && one == true)
        {
            results.push_back("Yes");
        }
        else if (zero == true && one == false && two == false)
        {
            results.push_back("Yes");
        }
        else if (zero == true && one == false)
        {
            results.push_back("No");
        }
        else
        {
            results.push_back("No");
        }
        delete arr;
    }

    for (auto const &result : results)
    {
        cout << result << endl;
    }
    return 0;
}