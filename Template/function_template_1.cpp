#include <utility>
#include <iostream>
using namespace std;

template <typename T>
void BubbleSort(T input[], int length){
    for (int loc=0; loc<length; loc++){
        for (int compare=loc+1; compare<length; compare++){
            if (input[loc] > input[compare]){
                swap(input[loc], input[compare]);
            }
        }
    }
}

int main(int argc, char* argv[]){
    int numbers[] = {10, 50, 30, 40, 20, 35, 47, 13};
    int length = sizeof(numbers)/sizeof(numbers[0]);
    BubbleSort<int>(numbers, length);

    // display array after sorted
    for (int i=0; i<length; i++){
        cout << numbers[i] << ", ";
    }
    cout << "\n";
}