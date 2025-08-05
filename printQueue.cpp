#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,4,7,9};
    queue<int> q1;

    //traverse the array and push the element into the queue
    for(int i=0; i<5; i++){
        q1.push(arr[i]);
    }

    while(!q1.empty()){
        cout << q1.front() << endl;
        q1.pop();
    }
    return 0;
}