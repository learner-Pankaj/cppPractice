#include<iostream>
using namespace std;

int main(){
    int arr[] = {24,58,23,95,38,94};
    int count = 0;
    for(int i=0; i<6; i++){
        if(arr[i]%2==0){
            count++;
        }
    }
    cout << "Number of even numbers = " << count << endl;
    return 0;
}