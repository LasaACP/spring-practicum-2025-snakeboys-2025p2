#include "snake.h"

snake::snake(Position start){
    body.push_back(start);
    init_direct = {1, 0};
}

void snake::move(bool incr){
    Position head = body.front();
    Position nHead = {head.x+init_direct.x, head.y+ init_direct.y};
    body.push_front(nHead);
    if (!incr){
        body.pop_back();
    }
}
