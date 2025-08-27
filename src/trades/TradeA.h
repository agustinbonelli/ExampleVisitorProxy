#pragma once

#include <string>

struct TradeA
{
  std::string name() const { return name_; }
  int id_;
  double notional_;
  std::string name_;
};