// Copyright 2014, University of Freiburg,
// Chair of Algorithms and Data Structures.
// Author: Hannah Bast

#ifndef PROJEKT_POOSWEEPERSOLVERBASE_H_
#define PROJEKT_POOSWEEPERSOLVERBASE_H_

#include "./PooSweeperMove.h"
#include "./PooSweeperStateBase.h"

// Abstract interface class for a PooSweeper solver.
class PooSweeperSolverBase {
 public:
  // Generate a move given the current state. A move is simply the position of a
  // particular cell to be uncovered next.
  virtual PooSweeperMove generateMove(const PooSweeperStateBase* state) = 0;
};

#endif  // PROJEKT_POOSWEEPERSOLVERBASE_H_