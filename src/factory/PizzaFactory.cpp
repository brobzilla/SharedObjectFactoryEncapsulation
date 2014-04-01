#include "PizzaFactory.h"
#include "BoalsburgPizzaShop.h"
#include "LibraryPizzaShop.h"
#include <string>
#include <iostream>

bool PizzaFactory::foundLib = false;

int PizzaFactory::callback(struct dl_phdr_info *info, size_t size, void *data)
{
    std::string str(info->dlpi_name);
    int pos = str.find("liblibshop.so");
    std::cout << "Pos = " << pos << std::endl;
    if (pos > 0) {
        foundLib = true;
    }

    return 0;
}

IPizzaShop * PizzaFactory::createPizzaShop(){
    foundLib = false;
    dl_iterate_phdr(PizzaFactory::callback, NULL);
    if (foundLib) {
        return new LibraryPizzaShop();
    } else {
        return new BoalsburgPizzaShop();
    }
}
