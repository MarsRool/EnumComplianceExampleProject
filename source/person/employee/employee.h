#pragma once
#include <source/person/person.h>
#include <source/defines.h>

namespace employee
{

class Employee : public Person
{
public:
    Employee() = default;
    Employee(const Employee& other) = default;
    virtual ~Employee() override = default;

private:
    PersonContainer _childs;
    std::set<std::string> _childs_names;

    friend class Person;
};

} // namespace employee
