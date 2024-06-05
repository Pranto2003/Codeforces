// https://codeforces.com/problemset/problem/1977/A

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int k;
    cin >> k;
    vector<string> results;
    while (k--)
    {
        int n, m;
        cin >> n >> m;
        if (n == m)
        {
            results.push_back("Yes");
        }
        else if (n < m)
        {
            results.push_back("No");
        }
        else if (n > m)
        {
            n -= m;
            if(n%2==0){
                results.push_back("Yes");
            }
            else{
                results.push_back("No");
            }
        }
    }

    for (auto &result : results)
    {
        cout << result << endl;
    }

    return 0;
}