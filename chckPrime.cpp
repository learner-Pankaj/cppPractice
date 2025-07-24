#include<iostream>
using namespace std;

int checkPrime(int n) {
    int flag = 0;
    
    if(n<=1) return 1; //0 and 1 is not a prime number

    for(int i=2; i<=n/2; i++){
        if(n%i==0){
            flag = 1;
        }
    }
    return flag;
}

int main(){
    int n=-2;
    int prime = checkPrime(n);
    if(prime == 0){
        cout << "The given number is prime number." << endl;
    }else{
        cout << "The given number is not a prime number." << endl;
    }
}