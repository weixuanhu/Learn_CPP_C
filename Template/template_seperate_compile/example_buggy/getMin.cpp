#include "formular.hpp"

template<typename T>
T getMin(T t1, T t2){
   if (t1>t2){
       return t2;
   }
   else{
       return t1;
   }
}