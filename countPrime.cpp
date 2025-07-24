#include<iostream>
using namespace std;

int checkPrime(int n) {

    if(n<=1) return 0; //0 and 1 is not a prime number

    for(int i=2; i<=n/2; i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int countprime(int a[], int n){
    int prime_count = 0;
    for(int i=0; i<n; i++){
        int flag = checkPrime(a[i]);
        prime_count += flag;
    }
    return prime_count;
}

int main(){
    int a[] = {1,11,2,3,8,10,13};
    int n = sizeof(a)/sizeof(a[0]);
    int primeCount = countprime(a, n);
    cout << "Array has " << primeCount << " Prime Numbers.";
    return 0;
}