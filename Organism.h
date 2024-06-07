// Example program
#include <iostream>
#include <string>

using namespace std;


#ifndef ORGANISM_H
#define ORGANISM_H

class Organism 
{
    private:
        unsigned int daysAlive;
        unsigned int maxDaysLifeSpan;
        unsigned int height;
        bool isAlive;
        string name;        
    
    public:
        Organism();
        Organism(string _name, unsigned int _maxDaysLifeSpan);
        Organism(Organism &orig);
        virtual ~Organism();
        
        unsigned int GetDaysAlive() const;
        unsigned int GetHeight() const;
        unsigned int GetMaxDaysLifeSpan() const;
        bool GetIsAlive() const;
        string GetName() const;
        
        bool SetCurrentAge(unsigned int _daysAlive);
        bool SetIsAlive(bool _isAlive);
        bool SetMaxDaysLifeSpan(unsigned int _maxDaysLifeSpan);
        bool SetName(string _name) ;
        bool SetHeight(unsigned int _height);
        
        virtual void Respire() = 0;
        virtual void Grow() = 0;
        virtual void Die() = 0;
        void CheckIfPastLifeSpan();
        
        friend ostream& operator<<(ostream& o, const Organism& _Organism);
        friend istream& operator>>(istream& i, Organism& _Organism);
        
};

#endif /* ORGANISM_H */