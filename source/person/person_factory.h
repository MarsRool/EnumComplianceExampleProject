#pragma once

#include "person.h"
#include <source/person/employee/employee.h>
#include <source/person/employee/artist.h>
#include <source/person/employee/astronaut.h>
#include <source/person/employee/chef.h>
#include <source/person/employee/construction_worker.h>
#include <source/person/employee/doctor.h>
#include <source/person/employee/engeneer.h>
#include <source/person/employee/firefighter.h>
#include <source/person/employee/police.h>

namespace employee
{

class PersonFactory
{
public:
    static PersonFactory& instance();

	template<PersonType E, typename... CreationArgsT>
	std::shared_ptr<Person> create(CreationArgsT&&... args) const
    {
		return std::make_shared<PersonTypeComplianceDeclarator::getClass<E>>(
				std::forward<CreationArgsT>(args)...);
    }

private:
    PersonFactory() = default;
};

} // namespace employee
