#include <vector>
#include <iostream>
using namespace std;

template <typename T>
void showVector(vector<T>& v){
    for (T x:v) {cout << x << " ";}
    cout << endl;
}

int main(int argc, char* argv[]){
    // Initializing by one by one pushing values
    vector<double> vect_1;
    vect_1.push_back(10.1);
    vect_1.push_back(21.2);
    vect_1.push_back(32.8);
    showVector(vect_1);

    // Specifying size and initializing all values
    vector<int> vect_2(15, 3);
    showVector(vect_2);

    // Initializing like arrays
    vector<char> vect_3{'a', 'c', 'k'};
    showVector(vect_3);

    // Initializing from array
    int arr[] = {-10, -7, -32, 5, 20, 22, 40};
    int num = sizeof(arr) / sizeof(arr[0]);
    vector<int> vect_4(arr, arr+num-1);
    showVector(vect_4);

    // Initializing from another vector
    vector<char> vect_dummy {'h', 'a', 'c', 'o', 'p'};
    vector<char> vect_5(vect_dummy.begin(), vect_dummy.begin()+2);
    showVector(vect_5);

    return 0;
}