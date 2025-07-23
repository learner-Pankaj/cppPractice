#include<iostream>
using namespace std;
int addThreeDigit(int a, int b, int c){
    int sum = a+b+c;
    return sum;
}
int main(){
    int a = 3; int b = 6; int c = 8;
    int sum = addThreeDigit(a,b,c);
    cout << "The sum of 3 numbers : " << sum << endl;
    return 0;
}