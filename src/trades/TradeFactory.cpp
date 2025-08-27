
#include "trades/TradeFactory.h"

#include "trades/AllTrades.h"
#include "instruments/AllInstrumentFactories.h"

#include <memory>

TradePtr makeTrade(TradeType type)
{
  switch (type)
  {
  case TradeType::TYPE_A:
    return std::make_shared<TradeA>(1, 10.0, "TradeA");
  case TradeType::TYPE_B:
    return std::make_shared<TradeB>(1, 10.0, "TradeB", "Gen01");
  default:
    break;
  }
  return std::make_shared<InvalidTrade>();
  ;
}