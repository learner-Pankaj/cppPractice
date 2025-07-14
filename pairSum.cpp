#include<iostream>
using namespace std;

int main(){
    int arr[] = {24,5,35,5,27,18,36,47,28,12,40};
    int sum = 40;
    int size = sizeof(arr)/sizeof(arr[0]);
    int count = 0;

    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(arr[i]+arr[j] == sum){
                cout << "Pair sum digit = " << arr[i] << ", " << arr[i+1] << endl;
                count++;
            }
        }
    }
    cout << "Number of pair in the array : " << count << endl;

    return 0;
}

