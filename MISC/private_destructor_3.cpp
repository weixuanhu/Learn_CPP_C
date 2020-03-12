// https://www.geeksforgeeks.org/private-destructor/

class Test1{
    private:
        ~Test1();
};

class Test2{
    private:
        ~Test2();
};

class Test3{
    private:
        ~Test3();
};
int main(){
    // compile OK. User is responsible for memory management for dynamic variables.
    Test3 *test3 = new Test3;
}

