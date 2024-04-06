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
        int alice, bob;
        cin >> alice >> bob;

        if (alice % 2 == 0 && bob % 2 == 0)
        {
            results.push_back("Bob");
        }
        else if (alice % 2 == 0 || bob % 2 == 0)
        {
            results.push_back("Alice");
        }
        else
        {
            results.push_back("Bob");
        }
    }

    for (auto const &result : results)
    {
        cout << result << endl;
    }
    return 0;
}