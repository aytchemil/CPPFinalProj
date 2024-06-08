using namespace std;

#include "Organism.h"
#include "Fruit.h"
#include "Plant.h"
#include "Tree.h"

#include <iostream>

Tree::Tree(bool hasFruit, string _name, unsigned int _maxDaysLifeSpan) : Plant::Plant(hasFruit, _name, _maxDaysLifeSpan) {
    woodType = Oak;
    barkThickness = 0.1f;
    crownExposureLevel = 0.1f;
    branches = 0;

}

Tree::Tree(WoodType _woodType, float _barkThickness, float _crownExposureLevel, int _branches, unsigned int _roots, unsigned int _leaves, unsigned int _glucose, bool hasFruit, string _name, unsigned int _maxDaysLifeSpan) 
: Plant(_roots, _leaves, _glucose, hasFruit, _name, _maxDaysLifeSpan) {
    
    woodType = _woodType;
    barkThickness = _barkThickness;
    crownExposureLevel = _crownExposureLevel;
    branches = _branches;
}


Tree::Tree(WoodType _woodType, float _barkThickness, float _crownExposureLevel, int _branches, unsigned int _roots, unsigned int _leaves, unsigned int _glucose, bool hasFruit, Fruit _mFruit, string _name, unsigned int _maxDaysLifeSpan)
: Plant(_roots, _leaves, _glucose, hasFruit,_mFruit, _name, _maxDaysLifeSpan) {
    
    woodType = _woodType;
    barkThickness = _barkThickness;
    crownExposureLevel = _crownExposureLevel;
    branches = _branches;
}


Tree::Tree(Tree &orig) : Plant(orig){
    woodType = orig.woodType;
    barkThickness = orig.barkThickness;
    crownExposureLevel = orig.crownExposureLevel;
    branches = orig.branches;
}

Tree::~Tree(){ cout<<"Destroying Tree"<<endl; }

//Getters
Tree::WoodType Tree::GetWoodType() const  {
    return woodType; 
}

float Tree::GetBarkThickness() const {
    return barkThickness; 
}

float Tree::GetCrownExposureLevel() const {
    return crownExposureLevel;
}

unsigned int Tree::GetBranches() const {
    return branches;
}

//Setters

bool Tree::SetWoodType(Tree::WoodType _woodType){
    woodType = _woodType;
    return true;
}

bool Tree::SetBarkThickness(float _barkThickness)
{
    barkThickness = _barkThickness;
    return true;
}

bool Tree::SetCrownExposureLevel(float _crownExposureLevel)
{
    crownExposureLevel = _crownExposureLevel;
    return true;
}

bool Tree::SetBranches(unsigned int _branches)
{
    branches = _branches;
    return true;
}

void Tree::Grow(){
    SetBranches(GetBranches() + 2);
    SetBarkThickness(GetBarkThickness() + 0.05f);
    Plant::Grow();
    
}

void Tree::Photosynthesis(unsigned int _glucoseUsed){
    
    _glucoseUsed *= GetCrownExposureLevel();
    
    Plant::Photosynthesis(_glucoseUsed);
}


ostream& operator<<(ostream& o, const Plant& _Plant)
{
    o << "Roots : " <<               _Plant.GetRoots()
      << "Leaves : " <<             _Plant.GetLeaves()
      << "Glucose : " <<           _Plant.GetGlucose()
      << "HasFruit : " <<         _Plant.GetDaysAlive();

    if(_Plant.GetHasFruit())
        o << " mFruit : " <<     _Plant.GetmFruit() << endl;
    else
        o << endl;
      
    return o;
}

istream& operator>>(istream& i, Organism& _Plant)
{
    cout<<"Inputing Organism: "<<GetName()<<"'s values.."<<endl;
    cout<<"-----------------------------------------------------"<<endl;
    cout<<"Input Roots: "<<endl;
    i >> _Plant.roots;
    
    cout<<"Input Leaves: "<<endl;
    i >> _Plant.leaves;
            
    cout<<"Input Glucose: "<<endl;
    i >> _Plant.glucose;
            
    cout<<"Input hasFruit: "<<endl;
    i >> _Plant.hasFruit;

    if(_Plant.GetHasFruit())
    {
        cout<<"Input mFruit: "<<endl;
        i >> _Plant.maxDaysLifeSpan;
    }
    
    return i;
}
 
