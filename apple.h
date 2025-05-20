#ifndef APPLE_H
#define APPLE_H
#include "snake.h"

#include <cstdlib>
using namespace std;

class Apple{
    public:
        void spawn(snake& s);
        Position position;
        Position printp();
};



#endif