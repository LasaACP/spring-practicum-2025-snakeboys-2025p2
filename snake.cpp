#include "snake.h"

snake::snake(Position start){
    body.push_back(start);
    init_direct = {1, 0};
}

void snake::move(bool incr){
    Postion head = body.front();
    Position nHead = {head.x+init_direct.x, head.y, +init_direct.y};
    body.push_front(newHead);
    if (!grow){
        body.pop_back();
    }
}