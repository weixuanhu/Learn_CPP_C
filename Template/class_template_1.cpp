#include <iostream>
using namespace std;

template <typename T>
class Array {
    private:
        T* ptr;
        int size;
    public:
        void print();
        Array(T arr[], int s);
};

template <typename T>
Array<T>::Array(T arr[], int s){
    ptr = new T[s];
    size = s;
    for (int i=0; i<size; i++){
        ptr[i] = arr[i];
    }
}

template <typename T>
void Array<T>::print(){
    for (int i=0; i<size; i++){
        cout << " " << *(ptr+i);
    }
    cout << endl;
}

int main(int argc, char* argv[]){
    int arr[] = {10, -5, 11, 27, 33, 23};
    int length = sizeof(arr)/sizeof(arr[0]);    
    Array<int> ArrayT(arr, length);
    ArrayT.print();
}