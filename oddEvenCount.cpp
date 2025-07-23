#include<iostream>
using namespace std;

void countEvenOdd(int a[], int n){
    int EvenCount = 0;
    int OddCount = 0;
    for(int i=0; i<n; i++){
        if(a[i]%2==0){
            EvenCount++;
        }else{
            OddCount++;
        }
    }
    cout << "Even numbers present in the array are : " << EvenCount << endl;
    cout << "Odd numbers present in the array are : " << OddCount << endl;

    return;
}

int main(){
    int a[] = {1,2,3,4,5};
    int n = sizeof(a)/sizeof(a[0]);
    countEvenOdd(a, n);
    return 0;
}