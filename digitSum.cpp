#include<iostream>
using namespace std;

int digitSum(int n){
    int sum=0; int a=n;
    while(n>=1){
        a = n%10;
        n = n/10;
        sum += a;
    }
    return sum;
}

int main(){
    int n = 234;
    int sum = digitSum(n);
    cout << n << " Digit Sum is : " << sum;
    return 0;
}