#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<int> results;

    while (t--)
    {
        int first, second, div, answer;
        cin >> first >> second;
        div = second / 2;
        answer = first * div;
        results.push_back(answer);
    }

    for (auto const &result : results)
    {
        cout << result << endl;
    }
    return 0;
}