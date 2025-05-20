#ifndef SOLVER_H
#define SOLVER_H
#include "snake.h"
using namespace std;

class Solver{
    public: 
        list<Position> s; 
        list<Position> solver(Position apple, list<Position> snake);
};
#endif