using namespace std;
#include <iostream>

#ifndef FOOD_H
#define FOOD_H

template<class T>
class Food 
{
public:
    T *foods;     
    int size;
    
    Food(int _size) {
        cout<<"Creating new Food Container Size : " <<_size<<endl;

        foods = new T[_size];
        size = _size;
    }

    Food(const Food<T> &orig) { }

    virtual ~Food() { delete foods;  cout<< "Destroying Food"<<endl; }
   
    
    
};

//template class Food<Fruit>;

#endif /* FOOD_H */

