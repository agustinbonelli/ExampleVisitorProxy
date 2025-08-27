#pragma once

#include "trades/Trade.h"


enum class TradeType { TYPE_UNKOWN = 0, TYPE_A = 1, TYPE_B = 2 };

TradePtr makeTrade(TradeType type);
