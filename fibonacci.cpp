#include<iostream>
using namespace std;


int fibo(int n){
    if(n==1)
        return 1;
    if(n==2)
        return 1;
    
    return fibo(n-1)+fibo(n-2);
}
int main(){
    int n = 6;
    int num = fibo(n);
    cout << "The " << n << "th term in the fibonacci series is " << num << endl;
    return 0;
}