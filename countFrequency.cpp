#include<iostream>
using namespace std;

int countFrequency(int a[], int n, int k){
    int count = 0;
    //using linear search
    for(int i=0; i<n; i++){
        if(a[i]==k)
            count++;
    }
    return count;
}

int main(){
    int a[] = {1,4,4,4,5};
    int n = sizeof(a)/sizeof(a[0]);
    
    //searching element 
    int k = 6;

    int count = countFrequency(a, n, k);
    if(count > 0)
        cout << k << " is present " << count << " times in the array.";
    else
        cout << k << " is not present in the array";
    return 0;
}