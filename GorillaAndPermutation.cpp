#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> permutation;

    // Add numbers from k to n in descending order
    for (int i = n; i >= k; --i) {
        permutation.push_back(i);
    }

    // Add numbers from m+1 to k-1 in descending order (if any)
    for (int i = k - 1; i > m; --i) {
        permutation.push_back(i);
    }

    // Add numbers from 1 to m in ascending order
    for (int i = 1; i <= m; ++i) {
        permutation.push_back(i);
    }

    // Print the permutation
    for (int num : permutation) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t; // Read the number of test cases
    while (t--) {
        solve(); // Solve each test case
    }
    return 0;
}
