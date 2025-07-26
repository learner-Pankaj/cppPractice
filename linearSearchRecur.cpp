#include<iostream>
using namespace std;

int linearSearchUsingRecursion(int a[], int n, int k, int i){
    if(i==n){
        return -1;
    }
    if(a[i]==k){
        return i;
    }
    return linearSearchUsingRecursion(a, n, k, i+1);
}

int main(){
    int a[] = {1,3,6,8,11};
    int n = sizeof(a)/sizeof(a[0]);
    int k = 8;
    int index = linearSearchUsingRecursion(a, n, k, 0);
    if(index>0)
        cout << "Value is present at index : " << index << endl;
    else   
        cout << "Value is not present in the array.";

    return 0;
}