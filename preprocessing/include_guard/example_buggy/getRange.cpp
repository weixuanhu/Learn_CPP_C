#include "formular.hpp"

template<typename T>
T getRange(T t1, T t2){
    return (getMax(t1, t2) - getMin(t1, t2));
}