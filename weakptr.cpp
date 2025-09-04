#include<bits/stdc++.h>
using namespace std;

int main(){
    shared_ptr<int> sp(new int(10));
    // this is also one way of making shared pointer
    // shared_ptr<int> sp1 = make_shared<int>(42);
    cout <<"shared pointer : "<< *sp << endl;
    weak_ptr<int> wp=sp;
    cout << "Weak pointer : " << *wp.lock() << endl;
    cout << sp.use_count()<<endl;
    cout << wp.use_count() << endl;

    if(auto temp = wp.lock()){
        cout << "Value : " << *temp << endl;
    }else{
        cout << "Value not found." << endl;
    }

    //freeing the shared pointer
    sp.reset();

    if(auto temp = wp.lock()){
        cout << "Value : " << *temp << endl;
    }else{
        cout << "Value not found. \n";
    }
    
    cout << sp.use_count()<<endl;
    cout << wp.use_count()<<endl;
    return 0;
}