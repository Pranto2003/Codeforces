//https://codeforces.com/problemset/problem/1971/A


#include <iostream>
#include<vector>
using namespace std;
int main(){
    vector<pair<int, int>> results;
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        if(a>b){
            int c;
            c = a;
            a = b;
            b = c;
            results.push_back(make_pair(a,b));
        }
        else{
            results.push_back(make_pair(a,b));
        }

    }

    for(auto &result:results){
       cout << result.first << " " << result.second << endl;
    }
    return 0;
}