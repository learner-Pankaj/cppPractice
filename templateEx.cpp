#include<iostream>
#include<string>
using namespace std;

template<class T>
T sum(T x, T y){
    return x+y;
}

int main(){
    cout << "Sum integer : " << sum<int>(4, 6) << endl;
    cout << "Double sum : " << sum<double>(4.8, 9.3) << endl;
    cout << "Float sum : " << sum<float>(2.7f, 5.9f) << endl;
    cout << "String sum : " << sum<string>("Pankaj ", "Yadav") << endl;
    return 0;
}