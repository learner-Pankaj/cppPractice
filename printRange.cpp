#include<iostream>
using namespace std;

void printRange(int a, int b){
    for(int i=a; i<=b; i++){
        cout << i << ", " ;
    }
    cout << endl;
    return ;
}
int main(){
    int a = 4; int b = 12;
    printRange(a,b);
    return 0;
}