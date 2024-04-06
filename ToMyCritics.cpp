// https://codeforces.com/problemset/problem/1850/A

#include <iostream>
using namespace std;
int main()
{
    int process, firstNumber, secondNumber, thirdNumber;
    cin >> process;
    for (int i = 0; i < process; i++)
    {
        cin >> firstNumber;
        cin >> secondNumber;
        cin >> thirdNumber;
        if (firstNumber + secondNumber >= 10)
        {
            cout << "YES" << endl;
        }
        else if (firstNumber + thirdNumber >= 10)
        {
            cout << "YES" << endl;
        }
        else if (secondNumber + thirdNumber >= 10)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}