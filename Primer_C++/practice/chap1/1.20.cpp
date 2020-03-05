#include "Sales_item.h"
#include <iostream>
using namespace std;

int main(int argc, char **argv){
    Sales_item item;
    while(cin >> item){
        cout << "output this item: " << item << endl;
    }
    return 0;
}