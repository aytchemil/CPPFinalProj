
#include "Organism.h"
#include "Fruit.h"
#include <iostream>

#ifndef PLANT_H
#define PLANT_H

class Plant : public Organism 
{
    private:
        unsigned int roots;
        unsigned int leaves;
        unsigned int glucose;
        bool hasFruit;
        Fruit mFruit;        
    
    public:
        Plant(bool hasFruit, string _name, unsigned int _maxDaysLifeSpan);
        Plant(unsigned int _roots, unsigned int _leaves, unsigned int _glucose, bool hasFruit, string _name, unsigned int _maxDaysLifeSpan);
        Plant(unsigned int _roots, unsigned int _leaves, unsigned int _glucose, bool hasFruit, Fruit _mFruit, string _name, unsigned int _maxDaysLifeSpan);
        Plant(Plant &orig);
        virtual ~Plant();
        

        unsigned int GetRoots() const;
        unsigned int GetLeaves() const;
        unsigned int GetGlucose() const;
        bool GetHasFruit() const;
        Fruit GetmFruit() const;
        
        bool SetRoots(unsigned int _roots);
        bool SetLeaves(unsigned int _leaves);
        bool SetGlucose(unsigned int _glucose);
        bool SetHasFruit(bool _hasFruit);
        bool SetmFruit(Fruit _mFruit);  
        
        void Respire() override;
        void Grow() override;
        void Die() override;
        virtual void Photosynthesis(unsigned int _glucoseUsed);
        void ExtendRoots();
        
};

#endif /* PLANT_H */
