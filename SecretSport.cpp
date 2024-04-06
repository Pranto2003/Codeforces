#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<char> results;
    int t;
    cin >> t;
    while (t--)
    {
        int size;
        cin >> size;
        string alphabets;
        cin >> alphabets;

        if (alphabets[size - 1] == 'A')
        {
            results.push_back('A');
        }
        else
        {
            results.push_back('B');
        }
    }

    for (auto const &result : results)
    {
        cout << result << endl;
    }

    return 0;
}