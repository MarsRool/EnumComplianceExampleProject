#include "pch.h"
#include "construction_worker.h"

namespace employee
{

PersonType ConstructionWorker::get_type() const noexcept
{
    return PersonTypeComplianceDeclarator::getType<std::decay_t<decltype(*this)>>;
}

} // namespace employee
