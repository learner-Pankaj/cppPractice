#include<iostream>
using namespace std;

class A{
    public:
        A(){
            cout << "Default constructor\n";
        }
        ~A(){
            cout << "Destructor called\n";
        }

};

int main(){
    A a_obj;
    a_obj.~A();
    return 0;
}