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

int binarySearchUsingResursion(int a[], int s, int e, int k){
    if(s<=e){
        int mid=(s+e)/2;
        if(a[mid]==k){
            return mid;
        }
        else if(a[mid]>k){
            return binarySearchUsingResursion(a,s,mid-1,k);
        }else{
            return binarySearchUsingResursion(a,mid+1,e,k);
        }
    }
    return -1;
}

int main(){
    int a[] = {1,3,6,8,11,15};
    int n = sizeof(a)/sizeof(a[0]);
    int k = 8;

    // int index_linear = linearSearchUsingRecursion(a, n, k, 0);
    
    int s=0; int e=n-1;
    int index_binary = binarySearchUsingResursion(a, s, e, k);

    if(index_binary>0)
        cout << "Value is present at index : " << index_binary << endl;
    else   
        cout << "Value is not present in the array.";

    return 0;
}