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

TEST(PersonTest, PersonReverseComplianceStaticTest)
{
    static_assert(PersonTypeComplianceDeclarator::getType<Person> == PersonType::Count,
            "Uncpecified classes should correspond to Count Enum element");
    static_assert(PersonTypeComplianceDeclarator::getType<class NonExistent> == PersonType::Count,
            "Uncpecified classes should correspond to Count Enum element");

    static_assert(PersonTypeComplianceDeclarator::getType<Employee> == PersonType::Employee,
            "Specified class should correspond to Enum element");
    static_assert(PersonTypeComplianceDeclarator::getType<Engeneer> == PersonType::Engeneer,
            "Specified class should correspond to Enum element");
    static_assert(PersonTypeComplianceDeclarator::getType<Artist> == PersonType::Artist,
            "Specified class should correspond to Enum element");
    static_assert(PersonTypeComplianceDeclarator::getType<Astronaut> == PersonType::Astronaut,
            "Specified class should correspond to Enum element");
    static_assert(PersonTypeComplianceDeclarator::getType<Chef> == PersonType::Chef,
            "Specified class should correspond to Enum element");
    static_assert(PersonTypeComplianceDeclarator::getType<ConstructionWorker> == PersonType::ConstructionWorker,
            "Specified class should correspond to Enum element");
    static_assert(PersonTypeComplianceDeclarator::getType<Firefighter> == PersonType::Firefighter,
            "Specified class should correspond to Enum element");
    static_assert(PersonTypeComplianceDeclarator::getType<Doctor> == PersonType::Doctor,
            "Specified class should correspond to Enum element");
    static_assert(PersonTypeComplianceDeclarator::getType<Police> == PersonType::Police,
            "Specified class should correspond to Enum element");
}

TEST(PersonTest, PersonTest)
{
    auto employee = PersonFactory::instance().create<PersonType::Employee>();
    Q_ASSERT(employee->get_type() == PersonType::Employee);
    auto engeneer = PersonFactory::instance().create<PersonType::Engeneer>();
    Q_ASSERT(engeneer->get_type() == PersonType::Engeneer);
    auto artist = PersonFactory::instance().create<PersonType::Artist>();
    Q_ASSERT(artist->get_type() == PersonType::Artist);
    auto astronaut = PersonFactory::instance().create<PersonType::Astronaut>();
    Q_ASSERT(astronaut->get_type() == PersonType::Astronaut);
    auto chef = PersonFactory::instance().create<PersonType::Chef>();
    Q_ASSERT(chef->get_type() == PersonType::Chef);
    auto construction_worker = PersonFactory::instance().create<PersonType::ConstructionWorker>();
    Q_ASSERT(construction_worker->get_type() == PersonType::ConstructionWorker);
    auto firefighter = PersonFactory::instance().create<PersonType::Firefighter>();
    Q_ASSERT(firefighter->get_type() == PersonType::Firefighter);
    auto doctor = PersonFactory::instance().create<PersonType::Doctor>();
    Q_ASSERT(doctor->get_type() == PersonType::Doctor);
    auto police = PersonFactory::instance().create<PersonType::Police>();
    Q_ASSERT(police->get_type() == PersonType::Police);
}

void start_tests()
{
    PersonTest_PersonComplianceStaticTest();
    PersonTest_PersonReverseComplianceStaticTest();
    PersonTest_PersonTest();
    qDebug() << "sizeof(PersonTypeComplianceDeclarator) " << sizeof(PersonTypeComplianceDeclarator);
}
