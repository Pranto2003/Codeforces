// https://codeforces.com/problemset/problem/1972/B

#include <iostream>
#include <string>
using namespace std;

// Function to determine the winner of the game
string determineWinner(int n, string s)
{
    int upCoins = 0; // Count the number of facing-up coins

    // Count the initial number of facing-up coins
    for (char c : s)
    {
        if (c == 'U')
            upCoins++;
    }

    // Determine the winner based on the parity of the number of facing-up coins
    if (upCoins % 2 == 1)
    {
        // If the number of facing-up coins is odd, Alice wins
        return "YES";
    }
    else
    {
        // Otherwise, Bob wins
        return "NO";
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << determineWinner(n, s) << endl;
    }
    return 0;
}
