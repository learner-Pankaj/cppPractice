#include<iostream>
using namespace std;

int leftIndex(int a[], int n, int l, int r, int k){
    int res=-1;
    while (l<=r)
    {
        int mid = l+(r-l)/2;
        if(a[mid]==k){
            res=mid;
            r=mid-1;
        }else if(a[mid]<k){
            l=mid+1;
        }else{
            r=mid-1;
        }
    }
    return res;
}

int rightIndex(int a[], int n, int l, int r, int k){
    int res=-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(a[mid]==k){
            res = mid;
            l = mid+1;
        }
        else if(a[mid]<k){
            l=mid+1;
        }else{
            r=mid-1;
        }
    }
    return res;
}

int main(){
    int a[] = {1,4,4,4,5};
    int n = sizeof(a)/sizeof(a[0]);
    
    //searching element 
    int k = 4;

    int left_index = leftIndex(a, n, 0, n-1, k);
    int right_index = rightIndex(a, n, 0, n-1, k);

    

    if(left_index==-1 || right_index==-1)
        cout << k << " is not present in the array";
    else{
        int count = right_index-left_index+1;
        cout << k << " is present " << count << " times in the array.";
    }
        
    return 0;
}