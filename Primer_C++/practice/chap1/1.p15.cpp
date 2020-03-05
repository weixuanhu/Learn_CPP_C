#include <iostream>
using namespace std;

int main(int argc, char **argv){
    /* This program let's user input number, and 
     * display the consecutive occurence of the lastest one.
     */
    
    int currentVal, value, occurence=0;
    if (cin >> value){
        currentVal = value;
        ++occurence;
        while (cin >> value){
            if (currentVal == value){
                ++occurence;
            }
            else{
                cout << "number " << currentVal << 
                        " occurs " << occurence << endl;
                
                currentVal = value;
                occurence = 1;
            }
        }
        cout << "number " << currentVal << 
                " occurs " << occurence << endl;
    }
}