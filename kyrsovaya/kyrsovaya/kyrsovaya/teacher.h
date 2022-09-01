#pragma once
#include "person.h"

enum class Departament { internationalRelations, politicalScience, historyAndWorldPolitics};
enum class Degree { graduateStudent, candidate, doctor};

class Teacher:public Person
{
public:
    Teacher(std::string fullName, int age, int height, int weight, std::string gender,
        std::string university, std::string subject, Departament dt, int experience, Degree de, int salary, int amountOfWork);
    Departament getDepartament() { return departament; }
    Degree getDegree() { return degree; }
    int payroll();
    void extent();
    void info() override;
private:
	std::string university;
	std::string subject;
    Departament departament;
    int experience;
    Degree degree;
    int salary;
    int amountOfWork;
};
