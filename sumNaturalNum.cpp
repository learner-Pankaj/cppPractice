#include<iostream>
using namespace std;

void sumNaturalNum(int n){
    int sum = n*(n+1)/2;
    cout << "Sum of natural number is : " << sum;
    return;
}

int main(){
    int n = 5;
    sumNaturalNum(n);
    return 0;
}