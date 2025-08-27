#pragma once

#include <string>

struct InvalidTrade
{
  std::string name() const { return "Invalid"; }
};