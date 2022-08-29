#pragma once
#include <iostream>
#include <string>

class Person
{
public:
    Person(std::string fullName, int age, int height, int weight, std::string gender);
    bool adulthood() {
        if (age >= 18)
            return true;
    }
    bool man() { return gender == "man"; }
    void print();
    virtual void info();
private:
    std::string fullName;
    std::string gender;
    int age;
    int height;
    int weight;
};