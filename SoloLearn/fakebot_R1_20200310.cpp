/* How many instances of an abstract class 
 * can be created ?
 * 
 * A class is made 'Abstract' by declaring at least one of its
 * member function as pure virtual function : virtual [type] funcname(para list) = 0;
 * 
 * The purpose of an abstract class is to provide an appropriate 
 * base class from which other classes can inherite 
 */

#include <iostream>
using namespace std;

class Shape{
    protected:
        int width;
        int height;
    public:
        virtual double GetArea()=0;
        void SetWidth(int w){
            width = w;
        }
        void SetHeight(int h){
            height = h;
        }
};

class Rectangle:public Shape{
    public:
//        Rectangle():width(0), height(0){}
//        Rectangle(){
 //           SetWidth(10);
//            SetHeight(5);
 //       }
        double GetArea(){
            return width*height;
        }
};

int main(){
    Rectangle Rect;
    Rect.SetHeight(10);
    Rect.SetWidth(5);
    cout << Rect.GetArea() << endl;
    return 0;
}