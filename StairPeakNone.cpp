#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    vector<string> results;

    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        if((a<b)&&(b<c)){
            results.push_back("STAIR");
        }
        else if((a<b)&&(b>c)){
            results.push_back("Peak");
        }
        else{
            results.push_back("None");
        }
    }

    for (const auto &result : results){
             cout << result << endl;
         }
        return 0;
}