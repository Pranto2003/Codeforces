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
        char arr[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i];
        }

        if (arr[0] == 'a' && arr[1] == 'b' && arr[2] == 'c')
        {
            results.push_back("Yes");
        }
        else if (arr[0] == 'b' && arr[1] == 'a' && arr[2] == 'c')
        {
            swap(arr[0], arr[1]);
            results.push_back("Yes");
        }
        else if (arr[0] == 'a' && arr[1] == 'c' && arr[2] == 'b')
        {
            swap(arr[1], arr[2]);
            results.push_back("Yes");
        }
        else if (arr[0] == 'c' && arr[1] == 'b' && arr[2] == 'a')
        {
            swap(arr[0], arr[2]);
            results.push_back("Yes");
        }
        else
        {
            results.push_back("NO");
        }
    }

    for (string c : results)
    {
        cout << c << endl;
    }

    return 0;
}