#pragma once

#include "proxy.h"

#include "instruments/Instrument.h"

PRO_DEF_FREE_DISPATCH(FreeMakeInstrument, makeInstrument);
PRO_DEF_MEM_DISPATCH(MemName, name);

struct TradeFacade : pro::facade_builder
  ::add_indirect_convention<MemName, std::string() const>
  ::add_indirect_convention<FreeMakeInstrument, InstrumentPtr()>
  ::support_copy<pro::constraint_level::nontrivial>
  ::support_relocation<pro::constraint_level::nontrivial>
  ::build {
};

using TradePtr = pro::proxy<TradeFacade>;