// https://codeforces.com/problemset/problem/2010/B

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    if ((a == 1) && (b == 2))
    {
        cout << 3 << endl;
    }
    else if ((b == 1) && (a == 2))
    {
        cout << 3 << endl;
    }
    else if ((a == 1) && (b == 3))
    {
        cout << 2 << endl;
    }
    else if ((a == 3) && (b == 1))
    {
        cout << 2 << endl;
    }
    else if ((a == 2) && (b == 3))
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 1 << endl;
    }

    return 0;
}
