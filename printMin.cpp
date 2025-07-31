#include<iostream>
using namespace std;

int printMin(int a[], int n, int i, int min){
    if(i == n)
        return min;
    
    //task
    else if(a[i]<min)
        min = a[i];

    //recursive call
    return printMin(a, n, i+1, min);
}

int main(){
    int a[] = {12,75,45,4,56,67};
    int size = sizeof(a)/sizeof(a[0]);
    int min = printMin(a, size, 0, a[0]);
    cout << min << endl;
    return 0;
}