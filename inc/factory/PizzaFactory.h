#ifndef PizzaFactory_H
#define PizzaFactory_H
#include "IPizzaShop.h"
#include <link.h>

class PizzaFactory {
    private:
        static bool foundLib;
    public:
        static IPizzaShop * createPizzaShop();
    private:
       static int callback(struct dl_phdr_info *info, size_t size, void *data);
};
#endif
