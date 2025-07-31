#include<iostream>
using namespace std;

void printArrayRev(int a[], int n, int current){
    if(current == -1)
        return;
    cout << a[current] << ", ";
    printArrayRev(a, n, current-1);
}

int main(){
    int a[] = {1,2,3,4,5};
    int size = sizeof(a)/sizeof(a[0]);
    printArrayRev(a, size, size-1);
    return 0;
}