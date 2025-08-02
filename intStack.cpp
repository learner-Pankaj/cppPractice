#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main(){
    stack<int> st;
    int a = 1002;

    while(a!=0){
        int digit = a%10;
        st.push(digit);
        a = a/10;
    }
    
    int n = st.size();
    int num = 0;
    
    for(int i=0; i<n; i++){
        int p = st.top();
        //1*10^0 : 2*10^1 : 3*10^2
        num += p*pow(10, i);
        st.pop();
    }

    cout << num << endl;

}