#include "IPizzaShop.h"
#include "PizzaFactory.h"

int main( int argc, const char* argv[] )
{
    IPizzaShop* shop = PizzaFactory::createPizzaShop();
    shop->makeDough();
    shop->stretchDough();
    shop->spreadSauce();
    shop->addCheese();
    shop->addToppings();
    shop->bakeIt();
    shop->cutIt();
    shop->boxIt();
    delete shop;
}
