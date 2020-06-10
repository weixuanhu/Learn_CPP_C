#include "formular.hpp"

template<typename T>
T getMax(T t1, T t2){
   if (t1>t2){
       return t1;
   }
   else{
       return t2;
   }
}