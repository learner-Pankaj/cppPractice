#include<iostream>
using namespace std;

int arrSum(int* arr, int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    int arr[5] = {1,2,3,4,5};
    int sum = arrSum(arr, 5);
    cout << "The sum of Array is = " << sum << endl;
    return 0;
}
