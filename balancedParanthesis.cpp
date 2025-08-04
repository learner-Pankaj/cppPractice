#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<char> st;
    string s = "((())(())";
    int n = s.length();
    for(int i=0; i<n; i++){
        if(!st.empty() && st.top() == '(' && s[i] == ')'){
            st.pop();
        }else{
            st.push(s[i]);
        }
    }

    if(st.empty()){
        cout << "Balanced" << endl;
    }else{
        cout << "Unbalanced" << endl;
    }
    return 0;
}