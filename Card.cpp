#include <iostream>
#include <stack>
using namespace std;
int main()
{
    int number;
    cin >> number;
    char word[number];
    stack<char> st[number];
    stack<char> st2[number];
    for (int i = 0; i < number; i++){
        cin >> word[i];
    }
    for (int i = 0; i < number; i++){
        if(word[i]=='o'||word[i]=='n'||word[i]=='e'){
            st[i].push(word[i]);
        }
       /* else{
            st2.push(word[i]);
        }*/
    }
     for (int i = 1; i < number; i++){
        char element_on_hand = st[i].top();
        int j = i - 1;
        while (j >= 0 && st[j].top()<element_on_hand){
            st[j + 1] =st[j];
            j--;
        }
        st[j + 1].push(element_on_hand);
    }
   for (int i = 0; i < number; i++) {
    while (!st[i].empty()) {
        cout << st[i].top() << " ";
        st[i].pop();
    }
}

    

        return 0;
}
