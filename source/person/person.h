#pragma once
#include "person_type.h"
#include <source/defines.h>
#include <source/person/person_type.h>

namespace employee
{

class Person : public std::enable_shared_from_this<Person>
{
public:
    Person() = default;
    virtual ~Person() = default;

    template <PersonType E, typename T>
	std::shared_ptr<T> upcast();

protected:
	template <typename DerivedT>
	std::shared_ptr<DerivedT> shared_from_base();

private:
    EmployeeWPtr _parent;
    std::string _name;
};

template <PersonType E, typename T>
std::shared_ptr<T> Person::upcast()
{
    return shared_from_base<PersonTypeComplianceDeclarator::getClass<E>>();
}

template <typename DerivedT>
std::shared_ptr<DerivedT> Person::shared_from_base()
{
    return std::static_pointer_cast<DerivedT>(shared_from_this());
}

} // namespace employee
