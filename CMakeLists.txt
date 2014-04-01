cmake_minimum_required(VERSION 2.8)
SET(CMAKE_INSTALL_PREFIX _build)

project(pizza_project)

include_directories(mypizza inc/factory inc/shop)
add_executable(mypizza inc/shop/IPizzaShop.h
		       inc/shop/BoalsburgPizzaShop.h
                       inc/factory/PizzaFactory.h
                       src/shop/BoalsburgPizzaShop.cpp
                       src/factory/PizzaFactory.cpp
                       src/main.cpp)

include_directories(libshop lib/inc/shop)
add_library(libshop SHARED lib/src/shop/LibraryPizzaShop.cpp lib/inc/shop/LibraryPizzaShop.h)

target_link_libraries(mypizza libshop)
install(TARGETS mypizza DESTINATION bin)
