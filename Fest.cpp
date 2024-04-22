#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    while (N--) {
        int a, b, c;
        cin >> a >> b >> c;

        
        vector<int> ascendingSides = {a, b, c};
        sort(ascendingSides.begin(), ascendingSides.end());

       
        if ((ascendingSides[0] * ascendingSides[0]) + (ascendingSides[1] * ascendingSides[1] )== ascendingSides[2] * ascendingSides[2]) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
