#include "teacher.h"

std::ostream& operator << (std::ostream& o, const Departament dt)
{
    switch (dt)
    {
    case Departament::internationalRelations:
        o << "international relations"; break;
    case Departament::politicalScience:
        o << "political science"; break;
    case Departament::historyAndWorldPolitics:
        o << "history and world politics"; break;
    }
    return o;
}

std::ostream& operator << (std::ostream& o, const Degree de)
{
    switch (de)
    {
    case Degree::graduateStudent:
        o << "graduate student"; break;
    case Degree::candidate:
        o << "candidate of science"; break;
    case Degree::doctor:
        o << "doctor of science"; break;
    }
    return o;
}

int Teacher::payroll()
{
    if (experience == 0 && getDegree() == Degree::graduateStudent)
    {
        return salary += salary / 10;
    }
    else if (experience == 0 && getDegree() == Degree::candidate)
    {
        return salary += salary / 4;
    }
    else if (experience == 0 && getDegree() == Degree::doctor)
    {
        return salary += salary / 2.5;
    }
    if (experience > 0 && getDegree() == Degree::graduateStudent)
    {
        return salary += salary += salary / 10 + salary / 10;
    }
    else if (experience > 0 && getDegree() == Degree::candidate)
    {
        return salary += salary += salary / 4 + salary / 8;
    }
    else if (experience > 0 && getDegree() == Degree::doctor)
    {
        return salary += salary += salary / 2.5 + salary / 6;
    }
}

void Teacher::extent()
{
    if (amountOfWork >= 8 && amountOfWork < 25)
    {
        degree = Degree::candidate;
    }
    else if (amountOfWork >= 25)
    {
        degree = Degree::doctor;
    }
    else
    {
        degree = Degree::graduateStudent;
    }
}

void Teacher::info()
{
    Person::info();
    Person::print();
    extent();
    std::cout << "university:" << university << std::endl;
    std::cout << "subject:" << subject << std::endl;
    std::cout << "departament:" << getDepartament() << std::endl;
    std::cout << "experience:" << experience << std::endl;
    std::cout << "degree:" << getDegree() << std::endl;
    std::cout << "salary:" << payroll() << std::endl;
    std::cout << "amount of work:" << amountOfWork << std::endl;
    std::cout << std::endl;
}

Teacher::Teacher(std::string fullName, int age, int height, int weight, std::string gender,
    std::string university, std::string subject, Departament dt, int experience, Degree de, int salary, int amountOfWork)
    :Person(fullName, age, height, weight, gender), departament(dt), degree(de) {
    this->university = university;
    this->subject = subject;
    if (experience < 0) { throw std::exception("the expirience cannot be negative"); }
    this->experience = experience;
    if (salary < 0) { throw std::exception("the salary cannot be negative"); }
    this->salary = salary;
    if (amountOfWork < 0) { throw std::exception("the amountOfWork cannot be negative"); }
    this->amountOfWork = amountOfWork;
}
