#include<iostream>
using namespace std;

int main(){
    int n1 = 0;
    int n2 = 1;
    int temp = 0;
    int num = 8;
    for(int i=0; i<8; i++){
        cout << n1 << ", ";
        temp = n1+n2;
        n1=n2;
        n2=temp;
    }
    return 0;
}