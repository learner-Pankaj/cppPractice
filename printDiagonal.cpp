#include<iostream>
using namespace std;

int main(){
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    cout << "This is Principal diagonal of the matrix : " << endl;
    for(int i=0; i<3; i++){
        for(int j=i; j<=i; j++){
            cout << a[i][j] << " ";
        }
    }
    cout << endl;
    cout << "This is Secondary diagonal of the matrix : " << endl;
    int k = 2;
    for(int i=0; i<3; i++){
        cout << a[i][k] << " ";
        k--;
    }

    return 0;
}