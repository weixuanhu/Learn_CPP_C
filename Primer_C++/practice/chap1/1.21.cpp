#include "Sales_item.h"
#include <iostream>
using namespace std;

int main(int argc, char **argv){
    Sales_item item1, item2;
    while(true){
        cout << "input 2 items with the same ISBN" << endl;        
        cout << "input item 1" << endl;
        if (!(cin >> item1)) { continue; }        
        cout << "input item 2" << endl;
        if (!(cin >> item2)) { continue; }
        
        if (item1.isbn() == item2.isbn()){
            cout << "The summary items are : " << endl;
            cout << item1 + item2 << endl;
        }
    }
    return 0;
}