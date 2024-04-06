// https://codeforces.com/problemset/problem/1850/C

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<string> grid(8);
        for (int i = 0; i < 8; i++)
            cin >> grid[i];
        for (int j = 0; j < 8; j++)
        {
            string word = "";
            for (int i = 0; i < 8; i++)
            {
                if (grid[i][j] != '.')
                {
                    word += grid[i][j];
                }
            }
            if (word != "")
            {
                cout << word << endl;
                break;
            }
        }
    }
    return 0;
}
