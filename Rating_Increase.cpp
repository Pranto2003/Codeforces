// https://codeforces.com/problemset/problem/1913/A

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string ab;
        cin >> ab;

        int n = ab.length();

        // Declare i outside the loop
        int i;

        // Iterate through all possible positions to split the string
        for (i = 1; i < n; i++)
        {
            string a_str = ab.substr(0, i);
            string b_str = ab.substr(i);

            // Convert strings to integers
            int a = stoi(a_str);
            int b = stoi(b_str);

            // Check conditions
            if (a > 0 && b > 0 && b > a && ab == to_string(a) + to_string(b))
            {
                cout << a << " " << b << endl;
                break;
            }
        }

        // If no valid split is found
        if (i == n)
            cout << -1 << endl;
    }

    return 0;
}
