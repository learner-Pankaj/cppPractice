#include<iostream>
using namespace std;

int lastOccurence(int a[], int n, int l, int r, int k){
    int res = -1;
    while(l<=r){
        int mid = l+(r-l)/2;
        if(a[mid]==k){
            res = mid;
            l = mid+1;
        }
        else if(a[mid]>k){
            r = mid-1;
        }
        else{
            l = mid+1;
        }
    }
    return res;
}

int main(){
    int a[] = {22,36,74,22,84,64,74,36};
    
    //searching element 
    int k = 22;
    
    int size = sizeof(a)/sizeof(a[0]);
    int last_index = lastOccurence(a, size, 0, size-1, k);
    if(last_index>0)
        cout << k << " is present at last index : " << last_index << endl;
    else
        cout << "Searching element is not present." << endl;
    
    return 0;
}