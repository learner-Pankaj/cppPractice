#include<iostream>
#include<thread>
using namespace std;

void threadFunc1(int start, int end){
    for(int i=start; i<end; i++){
        cout << "Hello\n";
    }
}

void threadFunc2(int start, int end){
    for(int i=start; i<end; i++){
        cout << "Hi\n";
    }
}
int main(){
    clock_t start, end;
    start = clock();

    //this is simple method to call the fuction 
    // threadFunc1(1, 20000);
    // threadFunc2(20001, 40000);

    //thread function
    std::thread funcTest1(threadFunc1, 1, 25000);
    std::thread funcTest2(threadFunc2, 25001, 50000);

    funcTest1.join();
    funcTest2.join();

    end = clock();
    double totaltime = (end - start)/double(CLOCKS_PER_SEC);
    cout << "Total time taken " << totaltime << endl;
    cout << CLOCKS_PER_SEC << endl;
    return 0;
}