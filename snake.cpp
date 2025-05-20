#include "snake.h"

snake::snake(Position start){
    body.push_back(start);
    init_direct.x = 1;
    init_direct.y = 0;
}

void snake::move(bool incr){
    Position head = body.front();
    Position nHead = {head.x+init_direct.x, head.y+ init_direct.y};
    body.push_front(nHead);
    if (!incr){
        body.pop_back();
    }
}
bool snake::collide(Position p){
    for (Position x: body){
        if (x == p){
            return true;
        }
    }
    return false;
}
