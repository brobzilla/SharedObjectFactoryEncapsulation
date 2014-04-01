/* Sweet Pizza Shop Interface */
#ifndef IPizzaShop_H
#define IPizzaShop_H
class IPizzaShop {
    public:
        virtual void makeDough()=0;

        virtual void stretchDough()=0;

        virtual void spreadSauce()=0;

        virtual void addCheese()=0;

        virtual void addToppings()=0;

        virtual void bakeIt()=0;

        virtual void cutIt()=0;

        virtual void boxIt()=0;
};
#endif
