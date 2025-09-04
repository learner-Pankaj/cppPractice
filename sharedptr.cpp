#include<bits/stdc++.h>
using namespace std;

int main(){
    shared_ptr<int> p1(new int(10));
    shared_ptr<int> p2;
    p2 = p1;
    cout << p1.use_count() << endl; //to count the pointing address
    cout << p2.use_count() << endl;

    cout << p1.get() << endl;
    cout << p2.get() << endl;   //to get the address of the value

    p1.reset();
    cout << p1.use_count() << endl; //to count the pointing address
    cout << p2.use_count() << endl;

    cout << p1.get() << endl;
    cout << p2.get() << endl;   //to get the address of the value

    return 0;
}