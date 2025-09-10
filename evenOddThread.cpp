#include<iostream>
#include<thread>

using namespace std;

void printEven(int n){
    for(int i=0; i<n; i+=2){
        cout << "Even :: " << i << endl;
    }
}
void printOdd(int n){
    for(int i=1; i<n; i+=2){
        cout << "Odd :: " << i << endl;
    }
}

int main(){

    int n = 0;
    cout << "Enter a number to print even and odd :: ";
    cin >> n;

    thread tEven(printEven, n);
    thread tOdd(printOdd, n);



    tEven.join();
    tOdd.join();

    return 0;
}