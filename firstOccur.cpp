#include<iostream>
using namespace std;

//Linear Search in sorted array.
int firstOccurence(int a[], int n, int k){
    for(int i=0; i<n; i++){
        if(a[i]==k)
            return i;
    }
    return -1;
}

//binary search
int firstOccur(int a[], int l, int r, int k){
    int res = -1;
    while(l<r){
        int mid = l+(r-l)/2;
        if(l>r){
            res = mid;
            r = mid-1;
        }
        else if(a[mid]>k){
            r=mid-1;
        }else{
            l = mid+1;
        }
    }
    return res;
}

int main(){
    int a[] = {2,7,3,8,2,7,3,9,5};
    int k = 9;
    int size = sizeof(a)/sizeof(a[0]);
    int index = firstOccurence(a, size, k);
    if(index > 0)
        cout << "First occurence of "<< k << " in array is present at index " << index << endl;
    else
        cout << k << " is not present in the array." << endl;
    
    return 0;
}