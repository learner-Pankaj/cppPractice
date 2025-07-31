#include<iostream>
using namespace std;

void printIncreasingOrder(int current, int n){
    
    //base condition
    if(current==n+1)
        return;
    //task
    cout << current << ", ";

    //recursive call
    printIncreasingOrder(current+1, n);
}

int main(){
    int n = 7;
    int current = 1;
    printIncreasingOrder(current, n);
    cout << endl;
    return 0;
}