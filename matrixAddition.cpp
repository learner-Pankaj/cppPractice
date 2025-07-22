#include<iostream>
using namespace std;

int main(){
    int a[4][2] = {{1,2},{3,4},{2,5},{5,9}};
    int b[4][2] = {{5,6},{7,8},{6,2},{0,1}};

    int sum[4][2];

    for(int i=0; i<4; i++){
        for(int j=0; j<2; j++){
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    cout << "The sum of the matrix : " << endl;
    for(int i=0; i<4; i++){
        for(int j=0; j<2; j++){
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}