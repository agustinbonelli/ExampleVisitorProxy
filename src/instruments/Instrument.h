#pragma once

#include "proxy.h"

PRO_DEF_MEM_DISPATCH(MemPrice, price);

struct InstrumentFacade : pro::facade_builder
  ::add_indirect_convention<MemPrice, double () const>
  ::support_copy<pro::constraint_level::nontrivial>
  ::support_relocation<pro::constraint_level::nontrivial>
  ::build {
};

using InstrumentPtr = pro::proxy<InstrumentFacade>;