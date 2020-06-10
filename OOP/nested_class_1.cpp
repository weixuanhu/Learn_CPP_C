// https://www.linuxquestions.org/questions/programming-9/c-how-to-initialize-nested-class-constructor-799096/
#include <iostream>
using namespace std;

class one
{
    int xvalue;
    public:
        one(int x)
        {
            cout << "nesting constructor" << endl;
            xvalue=x;
        }

    class nestedone
    {
        int ivalue;
        public:
            nestedone()
            {
                cout << "nested constructor" << endl;
                ivalue=10;
            }
        void function(nestedone);
    }obj1;
};

void one::nestedone::function(nestedone A)
{
    cout<<"I am in nestedone function"<<endl;
    cout<<"nestedone ivalue = "<<A.ivalue<<endl;
}

class two 
{
    int xvalue;
    public:
        two(int x)
        {
            cout << "nesting constructor" << endl;
            xvalue=x;
        }

    class nestedtwo 
    {
        int ivalue;
        public:
            nestedtwo()
            {
                cout << "nested constructor" << endl;
                ivalue=10;
            }
    };
};

int main(void)
{
    one obj1(1);
    two obj2(9);
    // obj.obj1.function(obj.obj1);
    return 0;
}