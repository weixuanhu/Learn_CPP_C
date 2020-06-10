#include "formular.hpp"

template<typename T>
T getMean(T t1, T t2){
    return (getMax(t1, t2) + getMin(t1, t2)) / 2.0;
}