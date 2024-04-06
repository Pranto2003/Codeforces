#include <iostream>
using namespace std;
int main(){
    int size,min;
    cout << "Enter  the size of array :" << endl;
    cin >> size;
    float arr[size];
    cout << "Enter the elements in array :" << endl;
    for (int i = 0; i < size; i++){
        cin >> arr[i];
    }
    cout << endl;
    cout << "Here is the array :" << endl;
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 1; i < size; i++){
        int element_on_hand = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j]<element_on_hand){
            arr[j + 1] =arr[j];
            j--;
        }
        arr[j + 1] = element_on_hand;
    }
    cout << endl;
    cout << "Here is the array after sorting :" << endl;
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    for (int i = 0; i < size; i++){
        min = arr[i] - arr[i + 1];
        for (int j = 1; j < size - 1; j++){
            if(arr[j]-arr[j+1]<min){
                min = arr[j] - arr[j + 1];
            }
        }
        break;
    }
    cout << endl;
    cout << "The shortest differenece :" << min << endl;
    return 0;
}