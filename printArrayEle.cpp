#include<iostream>
using namespace std;

void printArray(int a[], int n){
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    return;
}

int main(){
    int a[] = {1,3,6,2,8};
    int n = sizeof(a)/sizeof(a[0]);
    printArray(a, n);
    return 0;
}