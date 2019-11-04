#include <iterator>
#include <iostream>
#include <map>
using namespace std;

int main(int argc, char* argv[]){
    map<int, int> quizScore;
    quizScore.insert(pair<int, int>(1, 40));
    quizScore.insert(pair<int, int>(2, 30)); 
    quizScore.insert(pair<int, int>(3, 60)); 
    quizScore.insert(pair<int, int>(4, 20)); 
    quizScore.insert(pair<int, int>(5, 50)); 
    quizScore.insert(pair<int, int>(6, 50)); 
    quizScore.insert(pair<int, int>(7, 10));

    // printing Scores of quiz
    map<int, int>::iterator itr;
    
}