#include "pch.h"
#include <source/person/person_type.h>
#include <source/person/person_factory.h>

#define TEST(test_suite_name, test_name) void test_suite_name##_##test_name()

template <typename T1, typename T2>
constexpr bool StaticAssertTypeEq() noexcept {
  static_assert(std::is_same<T1, T2>::value,
                "type1 and type2 are not the same type");
  return true;
}

using namespace employee;

TEST(PersonTest, PersonComplianceStaticTest)
{
	StaticAssertTypeEq<
        PersonTypeComplianceDeclarator::getClass<PersonType::Undefined>,
			void>();

	StaticAssertTypeEq<
        PersonTypeComplianceDeclarator::getClass<PersonType::Employee>,
            Employee>();
	StaticAssertTypeEq<
        PersonTypeComplianceDeclarator::getClass<PersonType::Engeneer>,
            Engeneer>();
	StaticAssertTypeEq<
        PersonTypeComplianceDeclarator::getClass<PersonType::Artist>,
            Artist>();
	StaticAssertTypeEq<
        PersonTypeComplianceDeclarator::getClass<PersonType::Astronaut>,
            Astronaut>();
	StaticAssertTypeEq<
        PersonTypeComplianceDeclarator::getClass<PersonType::Chef>,
            Chef>();
	StaticAssertTypeEq<
        PersonTypeComplianceDeclarator::getClass<PersonType::ConstructionWorker>,
            ConstructionWorker>();
	StaticAssertTypeEq<
        PersonTypeComplianceDeclarator::getClass<PersonType::Firefighter>,
            Firefighter>();
	StaticAssertTypeEq<
        PersonTypeComplianceDeclarator::getClass<PersonType::Doctor>,
            Doctor>();
	StaticAssertTypeEq<
        PersonTypeComplianceDeclarator::getClass<PersonType::Police>,
            Police>();
	StaticAssertTypeEq<
        PersonTypeComplianceDeclarator::getClass<PersonType::Count>,
			void>();
}

TEST(PersonTest, PersonTest)
{
    auto employee = PersonFactory::instance().create<PersonType::Employee>();
}
