#include<iostream>
using namespace std;

int solve(int a[], int n, int k){
    for(int i=0; i<n; i++){
        if(a[i]>k)
            return a[i];
    }
    return -1;
}

int main(){
    int a[] = {1,3,6,9,13,17};
    int n = sizeof(a)/sizeof(a[0]);
    int k = 4;
    int value = solve(a, n, k);
    if(value > 0)
        cout << "The smallest number greater than " << k << " is : " << value << endl;
    else
        cout << "Value is not present in the array" << endl;
    
    return 0;
}