using namespace std;

#include <iostream>
#include "Animal.h"


#ifndef FRUIT_H
#define FRUIT_H

class Fruit {
public:
    int calories = 1;
    Fruit();
    Fruit(const Fruit& orig);
    virtual ~Fruit();
    
    int GetCalories(Animal a);
    
    void IncreaseBrainPower(Animal a);

private:

};

#endif /* FRUIT_H */

