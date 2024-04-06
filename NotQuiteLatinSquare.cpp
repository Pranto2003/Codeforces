#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;

    vector<char> results;
    while (t--)
    {
        char *arr = new char[9];
        int countA = 0, countB = 0, CountC = 0;

        for (int i = 0; i < 9; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < 9; i++)
        {
            if (arr[i] == 'A')
            {
                countA++;
            }
            else if (arr[i] == 'B')
            {
                countB++;
            }
            else if (arr[i] == 'C')
            {
                CountC++;
            }
            else
            {
                continue;
            }
        }
        if (countA < countB && countA < CountC)
        {
            results.push_back('A');
        }
        else if (countB < countA && countB < CountC)
        {
            results.push_back('B');
        }
        else
        {
            results.push_back('C');
        }
    }
    for (auto const &result : results)
    {
        cout << result << endl;
    }

    return 0;
}