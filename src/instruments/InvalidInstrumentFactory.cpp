
#include "instruments/InvalidInstrumentFactory.h"
#include "instruments/InvalidInstrument.h"
#include "trades/InvalidTrade.h"

#include <memory>

InstrumentPtr makeInstrument(const InvalidTrade&)
{
  return std::make_shared<InvalidInstrument>();
}