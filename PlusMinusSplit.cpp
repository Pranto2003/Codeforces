#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<int> results;

    while (t--)
    {
        int size, plus = 0, minus = 0, answer;
        cin >> size;
        char *arr = new char[size];
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == '-')
            {
                minus += 1;
            }
            else
            {
                plus += 1;
            }
        }

        if (minus == 0)
        {
            results.push_back(plus);
        }
        else if (plus == 0)
        {
            results.push_back(minus);
        }
        else
        {
            answer = plus - minus;
            results.push_back(abs(answer));
        }
        delete arr;
    }
    for (auto const &result : results)
    {
        cout << result << endl;
    }

    return 0;
}