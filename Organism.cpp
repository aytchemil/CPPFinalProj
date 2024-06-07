//Constructors

using namespace std;

#include "Organism.h"
#include <iostream>
        


Organism::Organism()
{
    daysAlive = 0;
    maxDaysLifeSpan = 100;
    height = 1;
    isAlive = true;
    name = "Organism";
}

Organism::Organism(string _name, unsigned int _maxDaysLifeSpan)
{
    daysAlive = 0;
    maxDaysLifeSpan = _maxDaysLifeSpan;
    height = 1;
    isAlive = true;
    name = _name;
    
}

Organism::Organism(Organism &orig)
{
    daysAlive = orig.daysAlive;
    maxDaysLifeSpan = orig.maxDaysLifeSpan;
    height = orig.height;
    isAlive = orig.isAlive;
    name = orig.name;
}

Organism::~Organism() { }

//Getters

unsigned int Organism::GetDaysAlive() const  {
    return daysAlive; 
}

unsigned int Organism::GetMaxDaysLifeSpan() const {
    return maxDaysLifeSpan;
}

unsigned int Organism::GetHeight() const {
    return height;
}

bool Organism::GetIsAlive() const {
    return isAlive; 
}

string Organism::GetName() const {
    return name;
}

    
    
//Setters


bool Organism::SetCurrentAge(unsigned int _daysAlive)
{
    daysAlive = _daysAlive;
    return true;
}

bool Organism::SetMaxDaysLifeSpan(unsigned int _maxDaysLifeSpan)
{
    maxDaysLifeSpan = _maxDaysLifeSpan;
    return true;
}

bool Organism::SetIsAlive(bool _isAlive)
{
    isAlive = _isAlive;
    return true;
}

bool Organism::SetName(string _name)
{
    name = _name;
    return true;
}

bool Organism::SetHeight(unsigned int _height)
{
    height = _height;
    return true;
}
    

void Organism::CheckIfPastLifeSpan(){
    if(daysAlive >= maxDaysLifeSpan)
        Die();
}
//Overloads Functions
    

ostream& operator<<(ostream& o, const Organism& _Organism)
{
    o << "Name : " <<               _Organism.GetName()
      << "Height : " <<             _Organism.GetHeight()
      << "Is Alive : " <<           _Organism.GetIsAlive()
      << "Days Alive : " <<         _Organism.GetDaysAlive()
      << "Max Days Alive : " <<     _Organism.GetMaxDaysLifeSpan() << endl;
      
    return o;
}

istream& operator>>(istream& i, Organism& _Organism)
{
    bool genDefaultStats = false;
    
    cout<<"Input Name: "<<endl;
    i >> _Organism.name;
    
    cout<<"Input Height: "<<endl;
    i >> _Organism.height;
            
    cout<<"Input isAlive: "<<endl;
    i >> _Organism.isAlive;
            
    cout<<"Input daysAlive: "<<endl;
    i >> _Organism.daysAlive;
    
    return i;
}

