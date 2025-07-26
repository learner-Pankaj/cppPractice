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

int main(){
    int a[] = {1,3,5,6,8,9};
    int size = sizeof(a)/sizeof(a[0]);
    int index = linearSearch(a, size, 4);
    if(index>0)
        cout << "Value is present at index : " << index << endl;
    else
        cout << "Search element in not present." << endl;
    
    return 0;
}