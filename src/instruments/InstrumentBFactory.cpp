
#include "instruments/InstrumentBFactory.h"
#include "instruments/InstrumentB.h"
#include "trades/TradeB.h"

#include <memory>

InstrumentPtr makeInstrument(const TradeB&)
{
  return std::make_shared<InstrumentB>();
}