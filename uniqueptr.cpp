#include<bits/stdc++.h>
using namespace std;

void f1(){
    unique_ptr<int> p1(new int(10));
    cout <<"P1 = "<< *p1 << endl;

    unique_ptr<int> p2;

    p2 = move(p1);
    cout <<"P2 = " << *p2 << endl;
}

int main(){
    f1();
    return 0;
}