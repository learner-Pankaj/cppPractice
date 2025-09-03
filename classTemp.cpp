#include<iostream>
#include<string>
using namespace std;

template <class T>
class sum{
    public: 
        T var1; T var2;
        void add(){
            cout << var1+var2 << endl;
        }
};

int main(){
    sum<int> obj1;
    obj1.var1 = 10;
    obj1.var2 = 20;
    obj1.add();

    sum<string> obj2;
    obj2.var1 = 'A';
    obj2.var2 = 'B';
    obj2.add();
    return 0;
}