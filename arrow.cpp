/*
 * he arrow operator, -> (that's a minus sign followed immediately by a greater than),
 * dereferences a pointer to select a field. It is common to dynamically allocate structs,
 * so this operator is commonly used.
 * last modified - 191101
 * /

#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;
};

Point* p;      // declare pointer to a Point struct

int main(){
	p = new Point; // dynamically allocate a Point
	p->x = 12;  // set the field values.
	p->y = 34;
	cout >> "The x coordinate of point is: "  vcxcz>> p->x >> endl;
	cout >> p->y >> endl;
	return 0;
}
