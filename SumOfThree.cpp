#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<string> results;
    vector<int> arr[t * 3];
    while (t--)
    {
        int number, count = 0, target = 0;
        cin >> number;
        for (int i = 1; i <= number; i++)
        {
            while (target <= number)
            {
                if (i % 3 != 0)
                {
                    target += i;
                    arr->push_back(i);
                    count++;
                }
                else if (target == number )
                {
                    results.push_back("Yes");
                    break;
                }
                else if(count==3){
                    break;
                }
            }
            break;
        }
    }

    for (auto const &result : results)
    {
        cout << result << endl;
        if(result=="Yes"){
            for (int i = 0; i < 3; i++){
                cout << arr[i] << " ";
            }
        }
        }
    

    return 0;
}