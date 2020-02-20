#include <iostream>

class Base{
    mutable int data;
    public:
        Base(int a=0): data(a) {}
        void SetData(int a) const {
            this->data = a;
        }
        int GetData() const {
            return this->data;
        }
}

int main(){
    Base obj(7);
    obj.SetData(4);
    std::cout << obj.GetData();
    return 0;
}