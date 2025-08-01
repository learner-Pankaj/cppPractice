#include<iostream>
using namespace std;

int factNum(int n){
    if(n == 0)
        return 1;
    
    return n*factNum(n-1);
}

int main(){
    int n = 5;
    int fact = factNum(n);
    cout << "Factorial of number " << n << " is " << fact << endl;
    return 0;
}