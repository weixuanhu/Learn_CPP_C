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

class Test4{
    private:
        ~Test4();
        friend void destructTest4(Test4 *t);
};

void destructTest4(Test4 *t){
    delete t;
}

int main(){
    // compile error: destructor is inaccessible. 
    Test4 *test4 = new Test4;
    destructTest4(test4);
}

