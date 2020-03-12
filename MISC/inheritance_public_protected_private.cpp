#include <iostream>
using namespace std;

class parent{
    public:
        int publicData = 0;
        void publicFunc(){cout << "public func" << endl;}
    protected:
        int protectedData= 0;
        void protectedFunc(){cout << "protected func" << endl;}
    private:
        int privateData = 0;
        void privateFunc(){cout << "private func" << endl;}
};

class publicDerived: public parent{
    void func(){
        cout << publicData << endl;
        cout << protectedData << endl;
        // cout << privateData << endl;
        publicFunc();
        protectedFunc();
        // privateFunc();
    }
};
class protectedDerived: protected parent{
    void func(){
        cout << publicData << endl;
        cout << protectedData << endl;
        // cout << privateData << endl;
        publicFunc();
        protectedFunc();
        // privateFunc();
    }
};
class privateDerived: private parent{
    void func(){
        cout << publicData << endl;
        cout << protectedData << endl;
        // cout << privateData << endl;
        publicFunc();
        protectedFunc();
        // privateFunc();
    }
};

int main(){
    parent parentObj;
    cout << parentObj.publicData << endl;
    // cout << parentObj.protectedData<< endl;
    // cout << parentObj.privateData<< endl;
    parentObj.publicFunc();
    // parentObj.protectedFunc();
    // parentObj.privateFunc();
    

    protectedDerived protectedObj;
    // cout << protectedObj.publicData << endl;
    // cout << protectedData<< endl;
    // cout << protectedData<< endl;
    // protectedObj.publicFunc();
    // protectedObj.protectedFunc();
    // protectedObj.privateFunc();

    privateDerived privateObj;
    // cout << privateObj.publicData << endl;
    // cout << privateObj.protectedData<< endl;
    // cout << privateObj.privateData<< endl;
    // privateObj.publicFunc();
    // privateObj.protectedFunc();
    // privateObj.privateFunc();
}