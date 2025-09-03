#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> li = {10,20,30};
    list<int> li1 = {98,74};
    list<int>::iterator it = li.begin();
    li.insert(it, 45);
    li.push_back(20);
    li.push_front(87);
    li.pop_back();
    li.pop_front();
    li.reverse();
    li.sort();
    li.merge(li1);
    for(it = li.begin(); it != li.end(); it++){
        cout << *it << endl;
    }

    
    return 0;
}