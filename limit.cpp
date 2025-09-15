#include<iostream>
#include<limits>
#include<climits>
using namespace std;

int main() {
    //include climits
    cout << "Upper limit of int:" << INT_MAX << endl;

    //include limits
    cout << "Upper limit of int: " << numeric_limits<int>::max() << endl;
    cout << "Lower limit of int: " << numeric_limits<int>::min() << endl;

    cout << "Lower limit of double: " << numeric_limits<double>::max() << endl;
    cout << "Lower limit of double: " << numeric_limits<double>::min() << endl;
    return 0;
}