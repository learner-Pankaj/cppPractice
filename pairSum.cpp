#include<iostream>
using namespace std;

int main(){
    int arr[] = {24,5,35,27,18,36,47,28,12,40};
    int sum = 40;
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < size; i++){
        if(arr[i]+arr[i+1] == sum){
            cout << "Pair sum digit = " << arr[i] << ", " << arr[i+1] << endl;
        }
    }
    return 0;
}