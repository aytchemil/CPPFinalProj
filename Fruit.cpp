using namespace std;

#include <iostream>
#include "Fruit.h"
#include "Animal.h"

Fruit::Fruit() {
    
}

Fruit::Fruit(const Fruit& orig) {
    
}

Fruit::~Fruit() {
}

int Fruit::GetCalories(Animal a){
    IncreaseBrainPower(a);
    return calories; 
}
    

void Fruit::IncreaseBrainPower(Animal a)
{
    cout<<"-------Special Fruit bonus!---------"<<endl;
    cout<<"Brain power before: "<<a.GetBrainSize()<<endl;
    
    cout<<"Fruit Increasing brain Power!"<<endl;
    a.SetBrainSize(a.GetBrainSize() + 1);
    
    cout<<"Brain power After: "<<a.GetBrainSize()<<endl;
    cout<<"----------------------------------"<<endl;
}


