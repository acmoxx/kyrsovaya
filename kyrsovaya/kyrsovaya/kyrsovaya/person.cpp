#include "person.h"

Person::Person(std::string fullName, int age, int height, int weight, std::string gender)
{
    this->fullName = fullName;
    if (age <= 0) { throw std::invalid_argument("Age can't be negative"); }
    this->age = age;
    if (height <= 0) { throw std::invalid_argument("Height can't be negative"); }
    this->height = height;
    if (weight <= 0) { throw std::invalid_argument("Weight can't be negative"); }
    this->weight = weight;
    this->gender = gender;
}

void Person::print()
{
    if (adulthood() == true && man())
    {
        std::cout << "military age" << std::endl;
    }
    else if (adulthood() == false && man())
    {
        std::cout << "not of military age" << std::endl;
    }
    else
    {
        std::cout << "not a man" << std::endl;
    }
}

void Person::info() 
{
    std::cout << "fullName:" << fullName << std::endl;
    std::cout << "age:" << age << std::endl;
    std::cout << "height:" << height << std::endl;
    std::cout << "weight:" << weight << std::endl;
    std::cout << "gender:" << gender << std::endl;
}