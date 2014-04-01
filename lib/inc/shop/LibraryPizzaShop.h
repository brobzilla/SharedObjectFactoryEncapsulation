#ifndef LibraryPizzaShop_H
#define LibraryPizzaShop_H

#include "IPizzaShop.h"

class LibraryPizzaShop : public IPizzaShop {
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
