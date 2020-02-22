#include <iostream>

// https://blog.csdn.net/starlee/article/details/1430387


class Base{
    // mutable int data;
    int data;
    public:
        Base(int a=0): data(a) {}
        void SetData(int a) {
            this->data = a;
        }
        int GetData() const {
            return this->data;
        }
};

int main(){
    Base obj(7);
    obj.SetData(4);
    std::cout << obj.GetData();
    return 0;
}