#ifndef FORMULAR_H
#define FORMULAR_H

#define GLOBAL_MAX 1e+10
#define GLOBAL_MAX -1e+10

template<typename T>
T getMax(T t1, T t2){
   if (t1>t2){
       return t1;
   }
   else{
       return t2;
   }
}

template<typename T>
T getMin(T t1, T t2){
   if (t1>t2){
       return t2;
   }
   else{
       return t1;
   }
}

template <typename T>
T getMean(T, T);

template <typename T>
T getRange(T, T);

#endif