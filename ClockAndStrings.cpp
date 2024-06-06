//https://codeforces.com/problemset/problem/1971/C

#include <iostream>
using namespace std;

bool doIntersect(int a, int b, int c, int d) {
    // Ensure a < b and c < d for consistent segment representation
    if (a > b) swap(a, b);
    if (c > d) swap(c, d);
    
    // if the first point of second line is between the first line
    // and the second point of first line is between the second line then it's definitely a intersection
    return (a < c && c < b && b < d) || (c < a && a < d && d < b);
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        
        if (doIntersect(a, b, c, d)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
