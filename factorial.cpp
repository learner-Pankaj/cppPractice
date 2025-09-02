#include<iostream>
using namespace std;

int fact(int n){
    if(n<=1){
        return 1;
    }else{
        return n*fact(n-1);
    }
}

int main(){
    cout << " Enter a Number to calculate factorial of number." << endl;
    int n;
    cin >> n;
    int result = fact(n);
    cout << "Factorial of : " << result <<endl;
    return 0;
}