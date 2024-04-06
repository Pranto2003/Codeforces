#include <iostream>
#include <vector>
using namespace std;
int main()
{

    int t;
    cin >> t;

    vector<string> ans(t);

    for (int i = 0; i < t; i++)
    {
        int k;
        cin >> k;
        int perform = 10;
        while (perform--)
        {
            if ((k + 1) % 3 == 0 || (k - 1) % 3 == 0)
            {
                ans[i] = "First";
                break;
            }
            if (perform == 0 && ((k + 1) % 3 != 0 || (k - 1) % 3 != 0))
            {
                ans[i] = "Second";
                break;
            }
        }
    }

    for (int i = 0; i < t; i++)
    {
        cout << ans[i] << endl;
    }

    return 0;
}