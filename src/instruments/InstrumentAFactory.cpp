#include "instruments/InstrumentAFactory.h"
#include "instruments/InstrumentA.h"
#include "trades/TradeA.h"

#include <memory>

InstrumentPtr makeInstrument(const TradeA&)
{
  return std::make_shared<InstrumentA>();
}