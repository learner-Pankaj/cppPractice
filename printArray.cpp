#include<iostream>
using namespace std;

void printArray(int a[], int size, int i){
    if(i==size)
        return;
    cout << a[i] << ", ";
    printArray(a, size, i+1);
}

int main(){
    int a[] = {1,4,7,8,9};
    int n = sizeof(a)/sizeof(a[0]);
    printArray(a, n, 0);
    cout << endl;
    return 0;
}