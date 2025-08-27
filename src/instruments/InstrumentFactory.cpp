
#include "instruments/InstrumentFactory.h"
#include "instruments/AllInstrumentFactories.h"

InstrumentPtr makeInstrument(TradePtr trade)
{
  return makeInstrument(*trade);
}