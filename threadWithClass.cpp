#include<bits/stdc++.h>
using namespace std;


//multi threading with class function
class Test{
    public:
        void threadFunc1(int start, int end){
            for(int i=start; i<=end; i++){
                cout << "Hello" << endl;
            }
        }

        void threadFunc2(int start, int end){
            for(int i=start; i<=end; i++){
                cout << "Hi" << endl;
            }
        }
};

int main(){
    Test obj;
    thread th1(Test::threadFunc1, &obj, 1, 25);
    thread th2(Test::threadFunc2, &obj, 26, 50);
    th1.join();
    th2.join();
    return 0;
}