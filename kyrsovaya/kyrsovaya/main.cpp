#include <iostream>
#include <string>
#include "electrician.h"

int main()
{
    try
    {
        Object object("object", 2, 3);
        Object object1("object1", 3, 3);

        Electrician electrician("Nndnd fhghg ghhgh", 18, 170, 60, "man",2, 3, &object);
        electrician.info();
        electrician.setObject(&object1);
        electrician.info();
    }
    catch (const std::exception& ex) { std::cout << "exception:" << ex.what(); }
    return 0;
}
