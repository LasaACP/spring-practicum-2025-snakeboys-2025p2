#include "apple.h"
#include "board.h"
#include "snake.h"
using namespace std;

void Apple::spawn(snake& s){
    while (true){
        position = {rand()%Board::width, rand()%Board::height};
        if (!s.collide(position)){
            break;
        }
    }
}