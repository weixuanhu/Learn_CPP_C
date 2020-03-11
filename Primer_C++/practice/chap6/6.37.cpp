#include <string>
#include <iostream>
#include <vector>
using namespace std;

string (&stringArray())[10];

using strArray = string[10];
strArray &stringArray2();

auto stringArray3() -> string (&)[10];

string str[10];
decltype(str) &stringArray4();
