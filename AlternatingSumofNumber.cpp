// https://codeforces.com/problemset/problem/2010/A

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                sum += arr[i]; 
            }
            else
            {
                sum -= arr[i]; 
            }
        }

        cout << sum << endl;
    }

    return 0;
}
