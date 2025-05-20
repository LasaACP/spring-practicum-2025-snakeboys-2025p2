#ifndef SNAKE_H
#define SNAKE_H
#include <list>
using namespace std;

struct Position{
    int x, y;
    bool operator==(const Position& other) const {
        return x == other.x && y == other.y;
    }
    bool operator<(const Position& other) const {
        return (x < other.x) || (x == other.x && y < other.y);
    }
};

class snake{
    public:
        list<Position> body;
        Position init_direct;
        snake(Position start);
        void move(bool incr);
        bool collide(Position p);
        list<Position> getBody();
};
#endif