#include <iostream>
#include <algorithm>
using namespace std;

// Function to calculate the maximum product
int maxProduct(int a, int b, int c) {
    int max_product = a * b * c;
    for (int i = 0; i <= 5; ++i) {
        for (int j = 0; j <= 5 - i; ++j) {
            int k = 5 - i - j;
            int new_a = a + i;
            int new_b = b + j;
            int new_c = c + k;
            max_product = max(max_product, new_a * new_b * new_c);
        }
    }
    return max_product;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        cout << maxProduct(a, b, c) << endl;
    }
    return 0;
}
