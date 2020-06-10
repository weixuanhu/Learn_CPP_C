#include "formular.hpp"

double getMin(double t1, double t2){
   if (t1>t2){
       return t2;
   }
   else{
       return t1;
   }
}