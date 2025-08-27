#pragma once

#include "instruments/Instrument.h"

struct InvalidTrade;

InstrumentPtr makeInstrument(const InvalidTrade&);