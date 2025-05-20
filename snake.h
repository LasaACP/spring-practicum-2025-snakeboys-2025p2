#ifndef SNAKE_H
#define SNAKE_H
#include <list>
using namespace std;

struct Position{
    int x, y;
    bool operator==(Position& temp){
        return x == temp.x && y == temp.y;
    } 
};

class snake{
    public:
        list<Position> body;
        Position init_direct;
        snake(Position start);
        void move(bool incr);
        bool collide(Position p);
};
#endif