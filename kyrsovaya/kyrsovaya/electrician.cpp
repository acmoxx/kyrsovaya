#include "electrician.h"

Object::Object(std::string name, int minExperience, int minRank)
{
    if (minExperience < 0) { throw std::exception("the minimum expirience cannot be negative"); }
    this->minExperience = minExperience;
    if (minRank <= 0) { throw std::exception("the minimum rank cannot be negative or equal to 0"); }
    this->minRank = minRank;
    this->name = name;
}

Electrician::Electrician(std::string fullName, int age, int height, int weight, std::string gender,
    int experience, int rank, Object* object) :Person(fullName, age, height, weight, gender)
{
    if (experience < 0) { throw std::exception("the expirience cannot be negative"); }
    this->experience = experience;
    if (rank <= 0) { throw std::exception("the rank cannot be negative or equal to 0"); }
    this->rank = rank;
    this->object = object;
}

void Electrician::minimumRequirements()
{
    if (object->getMinExperience() <= experience && object->getMinRank() <= rank)
    {
        std::cout << "you can work on this object" << std::endl;
    }
    else
    {
        std::cout << "you can not work on this object" << std::endl;
    }
}

void Electrician::info()
{
    Person::info();
    Person::print();
    std::cout << object->getName() << ":";
    minimumRequirements();
    std::cout << "experience:" << getExperience() << std::endl;
    std::cout << "rank:" << getRank() << std::endl;
    std::cout << std::endl;
}
