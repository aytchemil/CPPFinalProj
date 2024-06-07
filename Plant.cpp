using namespace std;

#include "Organism.h"
#include "Plant.h"
#include "Fruit.h"

#include <iostream>

Plant::Plant(bool hasFruit, string _name, unsigned int _maxDaysLifeSpan) : Organism(_name, _maxDaysLifeSpan) {
    roots = 0;
    leaves = 0;
    glucose = true;
    
    if(hasFruit){
        Fruit _mFruit;
        mFruit = _mFruit;
    }
}

Plant::Plant(unsigned int _roots, unsigned int _leaves, unsigned int _glucose, bool hasFruit, string _name, unsigned int _maxDaysLifeSpan) : Organism(_name, _maxDaysLifeSpan) {
    roots = _roots;
    leaves = _leaves;
    glucose = _glucose;
    hasFruit = false;
}

Plant::Plant(unsigned int _roots, unsigned int _leaves, unsigned int _glucose, bool hasFruit, Fruit _mFruit, string _name, unsigned int _maxDaysLifeSpan) : Organism(_name, _maxDaysLifeSpan) {
    roots = _roots;
    leaves = _leaves;
    glucose = _glucose;
    hasFruit = true;
    mFruit = _mFruit;
}

Plant::Plant(Plant &orig) : Organism(orig) {
    roots = orig.roots;
    leaves = orig.leaves;
    glucose = orig.glucose;
    hasFruit = orig.hasFruit;
    SetName(orig.GetName());
    if(hasFruit)
        mFruit = orig.mFruit;
}

Plant::~Plant() { cout<<"Destroying Plant"<<endl; }


//Getters
unsigned int Plant::GetRoots() const  {
    return roots; 
}

unsigned int Plant::GetLeaves() const {
    return leaves; 
}

unsigned int Plant::GetGlucose() const {
    return glucose;
}

bool Plant::GetHasFruit() const{
    return hasFruit;
}

Fruit Plant::GetmFruit() const {
    if(hasFruit)
        return mFruit;
    
    Fruit nFruit;
    return nFruit;
}

//Setters


bool Plant::SetRoots(unsigned int _roots)
{
    roots = _roots;
    return true;
}

bool Plant::SetLeaves(unsigned int _leaves)
{
    leaves = _leaves;
    return true;
}

bool Plant::SetGlucose(unsigned int _glucose)
{
    glucose = _glucose;
    return true;
}

bool Plant::SetmFruit(Fruit _mFruit)
{
    mFruit = _mFruit;
    return true;
}

bool Plant::SetHasFruit(bool _hasFruit){
    hasFruit = _hasFruit;
    return true;
}

void Plant::Respire(){
    cout<<"Respiring"<<endl;
    
    if(glucose <= 1)
    {
        Die();
        return;
    }
    
    glucose--;
    Organism::CheckIfPastLifeSpan();
}

void Plant::Grow(){
    cout<<"Grow"<<endl;
    
    glucose -= 2;
    
    SetHeight(GetHeight() + 1);
 
}

void Plant::Die(){
    cout<<"Die"<<endl;
    
    SetIsAlive(false);
}

void Plant::Photosynthesis(unsigned int _glucoseUsed){
    cout<<"Photosynthesis"<<endl;
    
    glucose+=_glucoseUsed;
}

void Plant::ExtendRoots(){
    cout<<"ExtendRoots"<<endl;
    
    roots++;
}
    