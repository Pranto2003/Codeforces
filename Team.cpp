#include <iostream>
using namespace std;
int main()
{
    int problem;
    int count = 0;
    cin >> problem;
    for (int i = 0; i < problem; i++)
    {
        int p, q, r;
        cin >> p >> q >> r;
        if (p + q + r >= 2)
        {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}
