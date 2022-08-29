#include <iostream>
#include <string>

class Object
{
public:
    Object(int minExperience, int minRank)
    {
        this->minExperience = minExperience;
        this->minRank = minRank;
    }

    int getMinExperience() { return minExperience; }
    int getMinRank() { return minRank; }

    void setMinExp(int tmpMinExperience) { minExperience = tmpMinExperience; }
    void setMinRank(int tmpMinRank) { minRank = tmpMinRank; }

private:
    int minExperience;
    int minRank;
};

class Electrician
{
public:
    Electrician(int experience, int rank, Object* object)
    {
        this->experience = experience;
        this->rank = rank;
        this->object = object;
    }
    void minimumRequirements()
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
    int getExperience() { return experience; }
    int getRank() { return rank; }
    Object* getObject() { return object; }

    void setExperience(int tmpExperience) { experience = tmpExperience; }
    void setRank(int tmpRank) { rank = tmpRank; }
    void setObject(Object* tmpObject) { object = tmpObject; }

private:
    int experience;
    int rank;
    Object* object;
};

int main()
{
    Object object(2, 3);
    Object object1(3, 3);
    Electrician electrician(2, 3, &object);
    electrician.minimumRequirements();
    electrician.setObject(&object1);
    electrician.minimumRequirements();
    return 0;
}