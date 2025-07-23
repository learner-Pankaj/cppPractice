#include<iostream>
using namespace std;

void printSum(int a, int b){
    int sum = a+b;
    cout << "Sum : " << sum << endl;
}
int main(){
    int a = 7; int b = 9;
    printSum(a, b);
    return 0;
}