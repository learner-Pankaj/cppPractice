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

        static void threadFunc3(){
            cout << "This is static thread function, no need to pass obj of class.\n";
        }
};

int main(){
    Test obj;
    // thread th1(Test::threadFunc1, &obj, 1, 25);
    // thread th2(Test::threadFunc2, &obj, 26, 50);
    thread th3(Test::threadFunc3);
    // th1.join();
    // th2.join();
    th3.join();
    cout << "Id of the thread :: "<<th3.get_id() << endl;
    return 0;
}