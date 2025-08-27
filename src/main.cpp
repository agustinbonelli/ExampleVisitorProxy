
#include "trades/TradeFactory.h"
#include "instruments/InstrumentFactory.h"

#include <memory>
#include <vector>

#include <fmt/format.h>

int main(int argc, char** argv)
{
  std::vector<TradePtr> trades;
  std::vector<InstrumentPtr> instruments;

  trades.push_back(makeTrade(TradeType::TYPE_A));
  trades.push_back(makeTrade(TradeType::TYPE_B));

  for (const auto& tr : trades)
  {
    instruments.push_back(makeInstrument(tr));
  }

  for (const auto& ins : instruments)
  {
    fmt::print("Instrument price: {}\n", ins->price());
  }

  return 0;
}
