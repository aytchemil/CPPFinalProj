using namespace std;

#include "Organism.h"
#include "Food.h"
#include <iostream>
#include "Animal.h"




Animal::Animal() : Organism() {
    brainSize = 1;
    isVertebrate = true;
    isSick = false;
    energy = 100;
}

Animal::Animal(float _brainSize, bool _isVertebrate, bool _isSick, int _energy, string _name, unsigned int _maxDaysLifeSpan) : Organism(_name, _maxDaysLifeSpan) {
    brainSize = _brainSize;
    isVertebrate = _isVertebrate;
    isSick = _isSick;
    energy = _energy;
}

Animal::Animal(Animal& orig) : Organism(orig) {
    brainSize = orig.brainSize;
    isVertebrate = orig.isVertebrate;
    isSick = orig.isSick;
    energy = orig.energy;
}

Animal::~Animal() {  }

bool Animal::SetBrainSize(float _brainSize){
    brainSize = _brainSize;
    return true;
}
bool Animal::SetIsVertebrate(bool _isVertebrate){
    isVertebrate = _isVertebrate;
    return true;        
}
bool Animal::SetIsSick(bool _isSick){
    isSick = _isSick;
    return true;
}
bool Animal::SetEnergy(int _energy){
    energy = _energy;
    return true;
}

bool Animal::GetIsVertebrate() const{
    return isVertebrate;
}
bool Animal::GetIsSick() const{
    return isSick;
}
float Animal::GetBrainSize() const{
    return brainSize;
}
unsigned int Animal::GetEnergy() const{
    return energy;
}

void Animal::Respire(){
    cout<<"Respiring"<<endl;
    int energyGain = 3;
    
    if(GetIsSick())
        energyGain = -1;
    
    SetEnergy(GetEnergy() + energyGain);
    
    if(GetEnergy() <= 0)
        Die();
    
    Organism::CheckIfPastLifeSpan();
}

void Animal::Grow(){
    cout<<"Grow"<<endl;
    SetBrainSize(GetBrainSize() + 1);
    SetHeight(GetHeight() + 1);
 
}

void Animal::Die(){
    cout<<"Die"<<endl;
    SetIsAlive(false);
}


void Animal::Eat(int calories){
    cout<<"Eating " << calories << " calories"<<endl;
    
    for(int i = 0; i < calories; i++){
        Grow();
    }
}



