#include <iostream>
using namespace std ;
class Rectangle{
public :
    int length;
    int breadth;
    void calculate_area() {
        int area=length*breadth;
        cout << area << endl;
    }


};

int main() {
    Rectangle rect;
    cin>>rect.length>>rect.breadth;
    rect.calculate_area();


    return 0;
}
