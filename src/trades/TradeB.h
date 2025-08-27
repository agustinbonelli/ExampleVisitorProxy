#pragma once

#include <string>

struct TradeB
{
  std::string name() const { return name_; }
  int id_;
  double notional_;
  std::string name_;
  std::string generator_;
};