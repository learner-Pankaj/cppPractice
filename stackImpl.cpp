#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main(){
    vector<int> vec = {3,6,2,8,9};
    stack<int> st;
    for(int i:vec){
        st.push(i);
    }

    cout << "######################################################\n";
    while(!st.empty()){
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}