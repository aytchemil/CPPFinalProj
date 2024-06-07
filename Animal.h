using namespace std;

#include "Organism.h"
#include "Food.h"
#include <iostream>

#ifndef ANIMAL_H
#define ANIMAL_H

class Animal : public Organism {
    
    private:
        float brainSize;
        bool isVertebrate;
        bool isSick;        
        int energy;
    
    public:
        Animal();
        Animal(float _brainSize, bool _isVertebrate, bool _isSick, int energy, string _name, unsigned int _maxDaysLifeSpan);
        Animal(Animal &orig);
        virtual ~Animal();
        
        bool SetBrainSize(float _brainSize);
        bool SetIsVertebrate(bool _isVertebrate);
        bool SetIsSick(bool _isSick);
        bool SetEnergy(int _energy);
        
        bool GetIsVertebrate() const;
        bool GetIsSick() const;
        float GetBrainSize() const;
        unsigned int GetEnergy() const;
        
        void Respire() override;
        void Grow() override;
        void Die() override;
        
        void Eat(int calories);
};

#endif /* ANIMAL_H */

