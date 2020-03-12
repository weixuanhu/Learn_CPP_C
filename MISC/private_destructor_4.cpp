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
    // compile error: destructor is inaccessible. 
    Test3 *test3 = new Test3;
    delete test3;
}

