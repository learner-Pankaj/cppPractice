#include<iostream>
using namespace std;

class Rectangle{
    private:
        int length;
        int breadth;
    public:
        Rectangle(int l=0, int b=0){
            length = l;
            breadth = b;
        }

        int area(){
            return length * breadth;
        }
};

int main(){
    Rectangle rec(5,8);
    int result = rec.area();
    cout << "Area of rectangle : " << result << endl;
    return 0;
}