
#ifndef MEAT_H
#define MEAT_H

class Meat {
public:
    int calories = 2;
    Meat();
    Meat(const Meat& orig);
    virtual ~Meat();
private:

};

#endif /* MEAT_H */

