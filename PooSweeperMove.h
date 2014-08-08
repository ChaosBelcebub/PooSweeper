// Copyright 2014, University of Freiburg,
// Chair of Algorithms and Data Structures.
// Author: Hannah Bast

#ifndef PROJEKT_POOSWEEPERMOVE_H_
#define PROJEKT_POOSWEEPERMOVE_H_

#include <stdlib.h>

// A move.
class PooSweeperMove {
 public:
  // The position of the cell to be uncovered next.
  size_t row;
  size_t col;

  // Type of move (reveal or toggle mine mark).
  enum { REVEAL, TOGGLE_MARK } type;
  // enum { REVEAL = 0, TOGGLE_MARK = 1 } type2;
};

#endif  // PROJEKT_POOSWEEPERMOVE_H_
