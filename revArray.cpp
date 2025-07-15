#include <iostream>
using namespace std;

int main(){
    int a[6] = {1,2,3,4,5,6};
    int fi = 0;
    int li = 5;

    //for loop approach
    // for(fi=0; fi<li; fi++){
    //     int temp = a[fi];
    //     a[fi] = a[li];
    //     a[li] = temp;
    //     li--;
    // }

    //while loop approach
    while (fi<li)
    {
        int temp = a[fi];
        a[fi] = a[li];
        a[li] = temp;
        fi++;
        li--;
    }
    

    for(int i=0; i<6; i++){
        cout << a[i] << " ";
    }
    return 0;
}