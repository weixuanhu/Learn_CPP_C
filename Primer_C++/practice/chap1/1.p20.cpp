#include "Sales_item.h"
#include <iostream>
using namespace std;

int main(int argc, char **argv){
    Sales_item item1, item2;
    if (cin>>item1>>item2){
        if (item1.isbn()==item2.isbn()){
            cout << item1 +item2 << endl;
            return 0;
        }
        else{
            cerr << "data must have the same isbn" << endl;
            return -1;
        }
    }
}