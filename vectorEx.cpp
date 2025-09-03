#include<bits/stdc++.h>
using namespace std;

int main(){
    //declaration
    vector<int> v1;
    cout <<"Size of vector1 : "<< v1.size() << endl;

    //initialization
    vector<int> v2 = {10,20,30};
                    //at index 0, 1, 2
    cout <<"Size of vector2 : "<< v2.size() << endl;
    v2.push_back(40); //at index 3 :: push_back insert element at the back of the vector
    cout <<"Size of vector2 : "<< v2.size() << endl;
    cout << "At " << v2.at(2) << endl;
    cout << "[] : " << v2[2] << endl;

    vector<int> :: iterator i;
    cout << "_____________________________________\n";
    for(i=v2.begin(); i!=v2.end(); i++ ){
        cout << *i << endl;
    }

    v2.pop_back();
    cout << "_____________________________________\n";
    for(i=v2.begin(); i!=v2.end(); i++ ){
        cout << *i << endl;
    }
    cout << "_____________________________________\n";
    i = v2.begin();
    cout << v2.at(2) << endl; 
    v2.insert(i+2, 19);
    cout << v2.at(2) << endl; 
    cout << "_____________________________________\n";
    v2.erase(i);
    for(i=v2.begin(); i!=v2.end(); i++ ){
        cout << *i << endl;
    }
    cout << "_____________________________________\n";
    v2.erase(v2.begin(), v2.end()-1);
    for(i=v2.begin(); i!=v2.end(); i++ ){
        cout << *i << endl;
    }
    return 0;
}