#include<iostream>
using namespace std;

int linearSearch(int a[], int size, int k){
    
    for(int i=0; i<size; i++){
        if(a[i]==k){
            return i;
        }
    }
    return -1;
}

int binarySearch(int a[], int size, int k){
    int s=0;
    int e=size-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(a[mid]<k){
            s=mid+1;
        }else if(a[mid]>k){
            e=mid-1;
        }else{
            return mid;
        }
    }
    return -1;
}

int main(){
    int a[] = {1,3,5,6,8,9};
    int size = sizeof(a)/sizeof(a[0]);
    int k = 11; //searching element
    int index1 = linearSearch(a, size, k);
    int index = binarySearch(a, size, k);
    if(index>0)
        cout << "Value is present at index : " << index << endl;
    else
        cout << "Search element in not present." << endl;
    
    return 0;
}