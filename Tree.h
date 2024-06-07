
#include "Organism.h"
#include "Fruit.h"
#include "Plant.h"
#include <iostream>

#ifndef TREE_H
#define TREE_H

class Tree : public Plant 
{
    private:
        float barkThickness;
        float crownExposureLevel;
        unsigned int branches;   
    
    public:
        enum WoodType
        {
            Birch,
            Oak,
            Spruce,
            Darkwood,
        } woodType ;
        
        Tree(bool hasFruit, string _name, unsigned int _maxDaysLifeSpan);
        Tree(WoodType _woodType, float _barkThickness, float _crownExposureLevel, int _branches, unsigned int _roots, unsigned int _leaves, unsigned int _glucose, bool hasFruit, string _name, unsigned int _maxDaysLifeSpan);
        Tree(WoodType _woodType, float _barkThickness, float _crownExposureLevel, int _branches, unsigned int _roots, unsigned int _leaves, unsigned int _glucose, bool hasFruit, Fruit _mFruit, string _name, unsigned int _maxDaysLifeSpan);
        Tree(Tree &orig);
        virtual ~Tree();
      
        WoodType GetWoodType() const;
        float GetBarkThickness() const;
        float GetCrownExposureLevel() const;
        unsigned int GetBranches() const;
       
        bool SetWoodType(WoodType _woodType);
        bool SetBarkThickness(float _barkThickness);
        bool SetCrownExposureLevel(float _crownExposureLevel) ;
        bool SetBranches(unsigned int _branches);
        
        
        virtual void Grow() override;
        virtual void Photosynthesis(unsigned int _glucoseUsed) override;
       
};

#endif /* TREE_H */
