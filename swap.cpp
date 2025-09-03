#include<iostream>
using namespace std;

class Swap{
    public:
    void exchange(int* a, int* b){
        int temp = 0;
        temp = *a;
        *a = *b;
        *b = temp;
    }
};

int main(){
    int a = 10;
    int b = 50;

    cout << "BEFORE swapping numbers are : a=" << a << ", b=" << b << endl;
    Swap obj;
    obj.exchange(&a, &b);
    cout << "AFTER swapping numbers are : a=" << a << ", b=" << b << endl;
    return 0;
}