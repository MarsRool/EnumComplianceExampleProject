#include "pch.h"
#include "construction_worker.h"

namespace employee
{

PersonType ConstructionWorker::get_type() const noexcept
{
    return PersonType::ConstructionWorker;
}

} // namespace employee
