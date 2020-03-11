#include <string>
#include <iostream>
#include <vector>
using namespace std;
int calcSum(initializer_list<int> List){
    int sum=0;
    for (const auto elem: List){
        sum += elem;
    }
    return sum;
}

int calcSum2(initializer_list<int> List){
    int sum=0;
    for (auto elem: List){
        sum += elem;
    }
    return sum;
}
int main(int argc, char **argv){
    cout << calcSum({5,3,10,20,33}) << endl;
    cout << calcSum2({10,20,33}) << endl;
    return 0;
}
