

#include "Plant.h"
#include "Organism.h"
#include "Fruit.h"
#include "Food.h"
#include "Tree.h"
#include "Animal.h"
#include "Fruit.h"
#include "Meat.h"

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;


void AnimalSelected(bool gen);
void PlantSelected(bool gen);
void TreeSelected(bool gen);

int main(int argc, char** argv) {
   
    /*
    Animal pig(4,true,false,100,"pig", 1000);
    Food<Fruit> fruits(3);
    Food<Meat> meats(1);

    cout<<"===Eating Fruit==="<<endl;
    
    cout<<"Animals height BEFORE eating a fruit: " << pig.GetHeight()<<endl;
    pig.Eat(fruits.foods[0].GetCalories(pig));
    cout<<"Animals height AFTER eating a fruit: " << pig.GetHeight()<<endl;
    
    cout<<"================="<<endl;
    
    
    
    cout<<"===Eating Meat==="<<endl;
    
    cout<<"Animals height BEFORE eating a MEAT: " << pig.GetHeight()<<endl;
    pig.Eat(meats.foods[0].calories);
    cout<<"Animals height AFTER eating a MEAT: " << pig.GetHeight()<<endl;
    
    cout<<"================="<<endl;
    //cout<<"Animals height after eating meat: " << thing.GetHeight()<<endl;
    */
    
    cout<<"-----------------------------[!]----------------------------------"<<endl;
    cout<<"Welcome to OOP Testing, There are 3 [Organism Objects] options for you to select"<<endl;
    cout<<"-----------------------------------------------------------------"<<endl;
    cout<<"Would you like to pre-generate data?"<<endl;
    cout<<"================================================================="<<endl;
    cout<<"Please Type Y, or N, to select your choice:"<<endl;
    cout<<"================================================================="<<endl;
    char preGen = 'm';
    bool gen = false;
    while(preGen != 'Y' && preGen != 'N')
    {
        cin>>preGen;
        switch(preGen)
        {
            case 'Y':  gen = true;  break;
            case 'N':  gen = false;  break;
            default: 
                cout<<"-----------------------------[!]----------------------------------"<<endl;
                cout<<"Retry: You have selected an option outside of the current 'Y' and 'N' options"<<endl;
                cout<<"Please make your selection again."<<endl;
                cout<<"-----------------------------------------------------------------"<<endl;
                break;
        }
    }
    cout<<endl<<endl;
    cout<<"-----------------------------------------------------------------"<<endl;
    cout<<"Please Type 1, 2, or 3, to select your choice as follows:"<<endl;
    cout<<"================================================================="<<endl;
    cout<<"1 : Animal       2: Plant        3: Tree"<<endl;
    cout<<"================================================================="<<endl;
    int selection = 0;
    while(selection <= 0 || selection >= 4){
        cin>>selection;
        switch(selection)
        {
            case 1:  AnimalSelected(gen);  break;
            case 2:  PlantSelected(gen);  break;
            case 3:  TreeSelected(gen);  break;
            default: 
                cout<<endl<<endl;
                cout<<"-----------------------------[!]----------------------------------"<<endl;
                cout<<"Retry: You have selected an option outside of the current 3 options"<<endl;
                cout<<"Please make your selection again."<<endl;
                cout<<"-----------------------------------------------------------------"<<endl;
                cout<<endl<<endl;
                break;
        }
    }
}


void AnimalSelected(bool gen){
    cout<<endl<<endl;
    cout<<"-----------------------------------------------------------------"<<endl;
    cout<<"You have selected the Animal"<<endl;
    cout<<"-----------------------------------------------------------------"<<endl;
    
    
    Animal a;
    cin>>a;

}

void PlantSelected(bool gen){
    cout<<endl<<endl;
    cout<<"-----------------------------------------------------------------"<<endl;
    cout<<"You have selected the Plant"<<endl;
    cout<<"-----------------------------------------------------------------"<<endl;


}

void TreeSelected(bool gen){
    cout<<endl<<endl;
    cout<<"-----------------------------------------------------------------"<<endl;
    cout<<"You have selected the Tree"<<endl;
    cout<<"-----------------------------------------------------------------"<<endl;


}