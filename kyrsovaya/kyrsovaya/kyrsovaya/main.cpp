#include "teacher.h"

int main()
{
    try
    {
        Object object("object", 2, 3);
        Object object1("object1", 3, 3);

        Electrician electrician("Alexandr Alex Alexandrovich", 18, 170, 80, "man",2, 3, &object);
        electrician.info();
        electrician.setObject(&object1);
        electrician.info();

        Teacher teacher("Shevchenko Julia Petrovna", 17, 163, 60, "women","Mechnikov","physics",Departament(0),0,Degree(0),10000,0);
        teacher.info();
    }
    catch (const std::exception& ex) { std::cout << "exception:" << ex.what(); }
    return 0;
}
