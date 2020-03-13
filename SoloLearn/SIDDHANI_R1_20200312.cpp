// will this code run successfully ?

class A{
    public:
        virtual ~A() = 0;
};
A::~A() {}

class B: public A{};

int main(){
    A *a = new B;
    delete a;
}
