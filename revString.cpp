#include<iostream>
#include<string>
#include<stack>
using namespace std;

string revString(string str){
    string s = str;
    string temp = "";
    stack<char> st;
    for(char ch : s){
        st.push(ch);
    }

    while(!st.empty()){
        temp += st.top();
        st.pop();
    }
    
    return temp;
}
int main(){
    cout << "Enter a Sentence \n";
    string s = "Pankaj yadav";
    // cin >> s; //taking input on space character it terminates
    getline(cin, s); //to take input with space in beteween the sentense 
    string result = revString(s);
    cout << "Reversed String :: " << result << endl;
    return 0;
}