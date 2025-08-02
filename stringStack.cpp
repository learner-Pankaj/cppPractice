#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<char> st;
    string s = "abc";

    for(char ch : s){
        st.push(ch);
    }

    int n = s.length();
    for(int i=0; i<n; i++){
        s[i] = st.top();
        st.pop();
    }
    cout << "The reverse of the given string is " << s << endl;
    return 0;
}
