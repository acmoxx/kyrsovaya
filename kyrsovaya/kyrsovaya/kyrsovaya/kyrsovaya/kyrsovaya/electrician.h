#pragma once
#include "person.h"

class Object
{
public:
    Object(std::string name, int minExperience, int minRank);

    int getMinExperience() { return minExperience; }
    int getMinRank() { return minRank; }
    std::string getName() { return name; }

    void setMinExp(int tmpMinExperience) { minExperience = tmpMinExperience; }
    void setMinRank(int tmpMinRank) { minRank = tmpMinRank; }
    void setName(std::string tmpName) { name = tmpName; }

private:
    int minExperience;
    int minRank;
    std::string name;
};

class Electrician :public Person
{
public:
    Electrician(std::string fullName, int age, int height, int weight, std::string gender,
        int experience, int rank, Object* object);
    void minimumRequirements();
    int getExperience() { return experience; }
    int getRank() { return rank; }
    Object* getObject() { return object; }

    void setExperience(int tmpExperience) { experience = tmpExperience; }
    void setRank(int tmpRank) { rank = tmpRank; }
    void setObject(Object* tmpObject) { object = tmpObject; }

    void info() override;
    int experience;
    int rank;
    Object* object;
};