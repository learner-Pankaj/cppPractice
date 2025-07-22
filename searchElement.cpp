#include<iostream>
using namespace std;

int main(){
    int k = 70;
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int flag = 0;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(a[i][j]==k){
                flag = 1;
                cout << "Searching element present at index : [" << i << "], [" << j <<"]"<< endl;
            }
        }
    }
    if(flag == 0)
        cout << "Element not Found." << endl;
    return 0;
}