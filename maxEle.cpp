#include<iostream>
using namespace std;

int main(){
    int arr[] = {76,46,23,66,73,88,22};
    int max = arr[0];
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << "Size of array = " << size << endl;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]>max){
            max = arr[i];
        }
    }
    cout << "Maximum element in the array is = " << max << endl;
    return 0;
}
