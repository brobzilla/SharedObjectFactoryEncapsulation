#ifndef BoalsburgPizzaShop_H
#define BoalsburgPizzaShop_H

#include "IPizzaShop.h"

class BoalsburgPizzaShop : public IPizzaShop {
    public:
        void makeDough();

        void stretchDough();

        void spreadSauce();

        void addCheese();

        void addToppings();

        void bakeIt();

        void cutIt();

        void boxIt();
};
#endif
