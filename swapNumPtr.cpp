#include<iostream>
using namespace std;

void swapNum(int*, int*);

int main(){
    int first = 5;
    int second = 6;
    cout << "Before swapping \n First : " << first << " :: Second : " << second << endl;
    swapNum(&first, &second);
    return 0;
}

void swapNum(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << "After swapping \n First : " << *a << " :: second : " << *b << endl;
}