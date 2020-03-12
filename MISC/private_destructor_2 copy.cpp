// https://www.geeksforgeeks.org/private-destructor/

class Test1{
    private:
        ~Test1();
};

class Test2{
    private:
        ~Test2();
};

int main(){
    // compile error: destructor inaccessible
    Test2 test2;
}