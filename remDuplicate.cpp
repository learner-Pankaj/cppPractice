#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<char> st;
    string s = "abbbaca";

    for(char c : s){
        if(!st.empty() && st.top()==c){
            st.pop();
        }else{
            st.push(c);
        }
    }

    stack<char> st1;
    while(!st.empty()){
        char ch = st.top();
        st1.push(ch);
        st.pop();
    }

    while(!st1.empty()){
        cout << st1.top();
        st1.pop();
    }

    return 0;
}