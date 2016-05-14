
#include <hir/type_ptr.hpp>
#include <hir/type.hpp>

::HIR::TypeRefPtr::TypeRefPtr(TypeRef tr):
    m_ptr( new TypeRef(mv$(tr)) )
{
}
::HIR::TypeRefPtr::~TypeRefPtr()
{
    delete m_ptr, m_ptr = nullptr;
}

