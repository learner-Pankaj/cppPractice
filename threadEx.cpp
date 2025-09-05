#include<bits/stdc++.h>
using namespace std;

void threadFunc1(int start, int end){
    for(int i = start; i <= end; i++){
        cout << "Hello" << endl;
    }
}

void threadFunc2(int start, int end){
    for(int i = start; i <= end; i++){
        cout << "Hi" << endl;
    }
}

int main(){
    clock_t start, end;
    start = clock();
    // threadFunc1(1, 25000);
    // threadFunc2(25001, 50000);
    thread test1(threadFunc1, 1, 25000);
    thread test2(threadFunc2, 25001, 50000);
    test1.join();
    test2.join();
    end = clock();

    double total_time = (end - start)/ double(CLOCKS_PER_SEC); 
    cout << "Total time taken : " << total_time << endl;
    cout << CLOCKS_PER_SEC << endl;
    return 0;
}