#include "formular.hpp"

double getMean(double t1, double t2){
    return (getMax(t1, t2) + getMin(t1, t2)) / 2.0;
}