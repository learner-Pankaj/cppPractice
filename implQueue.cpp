#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> st1;
    stack<int> st2;

    int arr[] = {1,4,6,7,9};

    for(int i=0; i<5; i++){
        st1.push(arr[i]);
    }

    while(!st1.empty()){
        st2.push(st1.top());
        st1.pop();
    }

    while(!st2.empty()){
        cout << st2.top() << ", ";
        st2.pop();
    }

    return 0;
}