#include "Sales_item.h"
#include <iostream>
using namespace std;

int main(int argc, char **argv){
    Sales_item total;
    cout << "input the initial book record: " ;
    if (cin >> total) {
        Sales_item trans;
        cout << "input a book record: " ;
        while (cin >> trans){
            if (trans.isbn()==total.isbn()){
                total += trans;
            }
            else{
                cout << total << endl;
                total = trans;
            }
        }
        cout << total << endl;
    }
    else{
        cerr << "input book record(s) error, exit " << endl;
        return -1;
    }
}